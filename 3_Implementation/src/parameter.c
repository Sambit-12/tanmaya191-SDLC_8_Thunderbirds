/**
 * @file parameter.c
 * @author Shashank
 * @brief to index of parameters of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int Parameter_s()
{

   int ch;
  
   printf("\n1.power_input");
   printf("\n2.power_output");
   printf("\n3.resistance");
   printf("\n4.freq");
   printf("\n5.speed");
   printf("\n6.torque");
   printf("\n7.secondary_turns");
   printf("\nEnter your choice:");
   scanf("%d", &ch);
   return (ch);
}
