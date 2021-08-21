/**
 * @file power_input.c
 * @author Shashank
 * @brief to check the  power_input of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int power_input(int Voltage,int current)
{
   
   
   int power_input = Voltage * current;
   result = power_input;
   return result;
}
