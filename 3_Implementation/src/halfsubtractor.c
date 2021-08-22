/**
 * @file halfsubtractor.c
 * @author Sambit Nayak (Sambit.Nayak@ltts.com)
 * @Half Subtractor it has two options Difference and Borrow for Difference via Truth Table and K Map it follows A^B (A xor B)
 * and for Borrow it follow A'B or (notA And B) as per truth Table and K map 
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"halfsubtractor.h"
  typedef char bit;
   bit borrow=0;
 // Bit Data type Input of two Bit type Data A and B
bit halfsub(bit A,bit B){
 borrow=(!A)&(B);// not A and B
 return A^B; //( Returning of Difference A Xor B)
      }
int subtractor()
{
 int i,j,output;
 printf("A   B  |  Diff  Borrow\n");
 //This Loop is responsible for Taking the values of  A and B input Such as 0 0, 0 1, 1 0, 11
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   output=halfsub(i,j);
   printf("%d   %d  |   ",i,j);
   printf("%d    %d\n",output,borrow);
   }
  }
 return 0;
}