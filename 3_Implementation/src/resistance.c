/**
 * @file resistance.c
 * @author Shashank
 * @brief to check the resistance of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int resistance(int Voltage,int current)
{
   
   int resistance = (Voltage/current);
   result = resistance;
   return result;
}
