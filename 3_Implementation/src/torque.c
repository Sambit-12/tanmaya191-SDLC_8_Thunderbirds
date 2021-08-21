/**
 * @file torque.c
 * @author Shashank
 * @brief to check the torque of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int torque( int Force,int radius)

{
  
   int Torque = Force * radius;
   result = Torque;
   return result;
}
