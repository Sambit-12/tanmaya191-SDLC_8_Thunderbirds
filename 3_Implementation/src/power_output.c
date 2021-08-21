/**
 * @file power_output.c
 * @author Shashank
 * @brief to check the power_output of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int power_output(int Voltage,int current)
{
  
 
   int power_output = Voltage * current;
   result = power_output;
   return result;

}
