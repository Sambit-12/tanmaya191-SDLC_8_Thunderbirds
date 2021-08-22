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
   printf("\n8.Half adder");
   printf("\n9.Half subtractor");
   printf("\n10.Duty Cycle or Voltage of Output Waveform");
   printf("\n11.Ohm's Law");
   printf("\n12.Tensile Strength");
   printf("\n13.Kirchoff's Voltage Law");
   printf("\n14.Kirchoff's Current Law");
   printf("\n15.Single-core");
   printf("\n16.Multi-core");
   printf("\nEnter your choice:");

   scanf("%d", &ch);
   return (ch);
}
