#include<stdio.h>
#include<math.h>
#include "CircularConvolution.h"
#define max 64

void circular_convolution()
{

    int i,j,k,L,M,N;
    float x[max],y[max],h[max];
    for(i=0;i<max;i++)  // Initialization
    {
        x[i]=0; h[i]=0; y[i]=0;
    }

    // Accepts first input signal values x[n]
    printf("Enter the length of x[n] L = : ");
    scanf("%d",&L);
    printf( "Enter the values of x[n] : ");

    for(i=0;i<L;i++)
    {
	 scanf("%f",&x[i]);
    }

    // Accepts second input signal values h[n]
       printf("Enter the length of h[n] M = : ");
       scanf("%d",&M);
       printf( "Enter the values of h[n] : ");
       for(i=0;i<M;i++)
    {
	scanf("%f",&h[i]);
    }
    // Select N
    if( L > M )
	 	N = L;
	else
		N = M;
    // Make N radix 2 Number.
    if ( N > 4 ) N = 8; else N = 4;
    // Find CC by FFT
    Fast_Circular_Convolve(x, N, h, y);
       printf("\n\n x[n] = " );
    for(i=0;i<N;i++)
       printf("  %4.2f  ",x[i]);
       printf("\n\n h[n] = " );
    for(i=0;i<N;i++)
       printf("  %4.2f  ",h[i]);
       printf("\n\n y[n] = " );
    for(i=0;i<N;i++)
       printf("  %4.2f  ",y[i]);
       printf("\n\n");
}

void Fast_Circular_Convolve(float *x, int N, float *h, float *y)
{
        int i,j,k,q,s;
        float X[max][2],H[max][2],Y[max][2],t[max][2],p[max][2];
        for(k=0; k<N; k++)  // Initialization
        {
              X[k][0] = 0;    X[k][1] = 0;
              H[k][0] = 0;    H[k][1] = 0;
              Y[k][0] = 0;    Y[k][1] = 0;
        }
        for(i=0;i<N;i++) // Copy x[n] to t[n][0]
        {
              t[i][0] = x[i]; t[i][1] = 0;
        }

        // Find X[k]
        if ( N == 4 )
             DITFFT_4_Point(N,t,X);
        else if ( N == 8 )
             DITFFT_8_Point(N,t,X);
       for(i=0;i<N;i++)  // Copy h[n] to t[n][0]
        {
         t[i][0] = h[i]; t[i][1] = 0;
        }
        // Find H[k]
        if ( N == 4 )
             DITFFT_4_Point(N,t,H);
        else if ( N == 8 )
             DITFFT_8_Point(N,t,H);
        // Find Y[k] = X[k] X H[k]
        for(k=0; k<N; k++)
        {
              float a,b,c,d;
              a = X[k][0];   b = X[k][1];
              c = H[k][0];   d = H[k][1];
              Y[k][0] = (a * c) - (b * d);
              Y[k][1] = (b * c) + (a * d);

        }

    // To find y[n]
    // Find Y*[k]
     for (k=0; k< N; k++)
     	{
        	 Y[k][1] = Y[k][1] * (-1);
     	}
     // Find FFT{Y*[k]}
      if ( N == 4 )
             DITFFT_4_Point(N,Y,p);
      else if ( N == 8 )
             DITFFT_8_Point(N,Y,p);



        // find p[n] = {  FFT{Y*[k]} / N  }*


	for(i=0;i<N;i++)
	{
		p[i][0] = p[i][0]/N;
		p[i][1] = (-1) * p[i][1]/N;
	}

       for(i=0;i<N;i++)  // Copy p[][] to y[n]
       {
		y[i] = p[i][0];

	}
}/*-circular convolve();-*/
void DITFFT_8_Point( int N, float x[8][2], float t[8][2])
{
     	int i,j,k,a,b,c,d;
      	float e;
        float X1[4][2], X2[4][2], G[4][2], H[4][2];
	for(i = 0; i < 4; i++)
	{
        	X1[i][0] = x[2*i][0];    X1[i][1] = x[2*i][1];

                X2[i][0] = x[2*i+1][0];  X2[i][1] = x[(2*i)+1][1];
        }
	DITFFT_4_Point(4,X1,G);
	DITFFT_4_Point(4,X2,H);

	// X[k] = G[k] + W H[k]
                 e = 6.283185307179586/N;
        for(k=0; k<4; k++)
        {
                t[k][0] = G[k][0] + ( H[k][0] * cos(e*k) + H[k][1] * sin(e*k) );
                t[k][1] = G[k][1] + ( H[k][1] * cos(e*k) - H[k][0] * sin(e*k) );
        }

        for(k=0; k<4; k++)
        {
                d = k + 4;
                t[d][0] = G[k][0] + ( H[k][0] * cos(e*d) + H[k][1] * sin(e*d) );
                t[d][1] = G[k][1] + ( H[k][1] * cos(e*d) - H[k][0] * sin(e*d) );
        }
}
void DITFFT_4_Point( int N, float x[4][2], float t[4][2])
{

	int i,j,k,n,a,b,c,d;
     	float e;
        float G[4][2], H[4][2];
	for(n=0; n<N; n++)
	{
		t[n][0] = 0; t[n][1] = 0;
		G[n][0] = 0; G[n][1] = 0;
		H[n][0] = 0; H[n][1] = 0;
	}
	  // Stage-1
		 G[0][0] = x[0][0] + x[2][0];    G[0][1] = x[0][1] + x[2][1];

		 G[1][0] = x[0][0] - x[2][0];    G[1][1] = x[0][1] - x[2][1];

		 H[0][0] = x[1][0] + x[3][0];    H[0][1] = x[1][1] + x[3][1];

		 H[1][0] = x[1][0] - x[3][0];    H[1][1] = x[1][1] - x[3][1];

          // Stage-2

	  e = 6.283185307179586/N;
         // X[k] = G[k] + WNnk H[k]

               k=0;   t[0][0] = G[0][0] + ( H[0][0] * cos(e*k) + H[0][1] * sin(e*k) );
                      t[0][1] = G[0][1] + ( H[0][1] * cos(e*k) - H[0][0] * sin(e*k) );

               k=1;   t[1][0] = G[1][0] + ( H[1][0] * cos(e*k) + H[1][1] * sin(e*k) );
                      t[1][1] = G[1][1] + ( H[1][1] * cos(e*k) - H[1][0] * sin(e*k) );


               k=2;   t[2][0] = G[0][0] + ( H[0][0] * cos(e*k) + H[0][1] * sin(e*k) );
                      t[2][1] = G[0][1] + ( H[0][1] * cos(e*k) - H[0][0] * sin(e*k) );


               k=3;   t[3][0] = G[1][0] + ( H[1][0] * cos(e*k) + H[1][1] * sin(e*k) );
                      t[3][1] = G[1][1] + ( H[1][1] * cos(e*k) - H[1][0] * sin(e*k) );
}