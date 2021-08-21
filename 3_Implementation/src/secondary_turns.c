/**
 * @file secondary_turns.c
 * @author Shashank
 * @brief to check the secondary side of turns of transformer
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int secondary_turns(int Turn_primary,int V1,int V2)
{ 
    
   
   int Turn_secondary = (V1 / V2) * Turn_primary;
   result = Turn_secondary;
   return result;
}
