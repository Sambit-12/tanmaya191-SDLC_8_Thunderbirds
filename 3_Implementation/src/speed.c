/**
 * @file speed.c
 * @author Shashank
 * @brief to check the speed of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int speed(int Poles, int Freq)
{
   
  
   int Speed = (120 * Freq) / Poles;
   result = Speed;
   return result;
}
