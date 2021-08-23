#include<stdio.h>


long getResistorValue( char colorCode[], int colorValue[], int r_value )
{

    int i;
    int j;
    long multiplier;

    for( i = 0; i < 3; i++)
    {
        switch (colorCode[i])
        {
            case('b'):
            case('B'):
                colorValue[i] = 0;
                break;

            case('n'):
            case('N'):
                colorValue[i] = 1;
                break;

            case('r'):
            case('R'):
                colorValue[i] = 2;
                break;

            case('o'):
            case('O'):
                colorValue[i] = 3;
                break;

            case('y'):
            case('Y'):
                colorValue[i] = 4;
                break;

            case('g'):
            case('G'):
                colorValue[i] = 5;
                break;

            case('l'):
            case('L'):
                colorValue[i] = 6;
                break;

            case('v'):
            case('V'):
                colorValue[i] = 7;
                break;

            case('e'):
            case('E'):
                colorValue[i] = 8;
                break;

            case('w'):
            case('W'):
                colorValue[i] = 9;
                break;
			default: break;
        }
    }

    for( j = 0; j < 8; j++)
       {
        switch (colorCode[3])
         {
            case('b'):
            case('B'):
                multiplier = 1;
                break;

            case('n'):
            case('N'):
                multiplier = 10;
                break;

            case('r'):
            case('R'):
                multiplier = 100;
                break;

            case('o'):
            case('O'):
                multiplier = 1000;
                break;

            case('y'):
            case('Y'):
                multiplier = 10000;
                break;

            case('G'):
            case('g'):
                multiplier = 100000;
                break;

            case('l'):
            case('L'):
                multiplier = 1000000;
                break;

            case('v'):
            case('V'):
                multiplier = 10000000;
                break;

			//case w not implemented

			default: break;
        }

        r_value = ((colorValue[0] + (colorValue[1]) + (colorValue[2])) * multiplier);

    }

    return r_value;
}
