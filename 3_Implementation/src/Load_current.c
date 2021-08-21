/**
 * @file Load current.c
 * @author Shashank
 * @brief to check the freq of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int load_current(int power,int voltage)

{
       int Load_current = (power/voltage);
       return Load_current;
}

