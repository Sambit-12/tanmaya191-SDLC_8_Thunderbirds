/**
 * @file halfadder.c
 * @author Sambit Nayak (Sambit.Nayak@ltts.com)
 * @Half Adder has two functions Sum and Carry where Sum is A^B(A xor B) according to Kmap and Truth table 
 * And we have another function as Carry which is AB or (A and B) 
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"halfadder.h"
typedef char bit;
 bit carry=0;
 // Bit Data type Input of two Bit type Data A and B
bit halfadd(bit A,bit B){
 carry=A&&B;// ( Carry= A and B)
   return A^B;//( Returning of Sum A Xor B)
 }
int adder()
{
 int i,j,result;
 printf("A   B  |  S  Carry\n");
 //This Loop is responsible for Taking the values of  A and B input Such as 0 0, 0 1, 1 0, 11
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   result=halfadd(i,j);
   printf("%d   %d  |  ",i,j);
   printf("%d   %d\n",result,carry);
  }
 }
 return 0;
}
 