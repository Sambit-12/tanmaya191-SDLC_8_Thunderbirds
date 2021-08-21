/**
 * @file Wire_selection.c
 * @author Shashank
 * @brief to check the Wire_selection
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
int Wire_selection()
{
    int ch;
   
   printf("\n1.Single-core");
   printf("\n2.Multi-core");
   printf("\nEnter your choice:");
   scanf("%d", &ch);
   return (ch);
}
