/**
 * @file Factor_s.c
 * @author Shashank
 * @brief to check the  power_input of the machine
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
void Factor_s(void)
{
     printf("\n\n******The selection of  wire Depent on three Factors********\n\n");
     printf("\n\n^^^^^^^^^^^Total Load^^^^^^^^^^^\n\n");
     printf("\n\n^^^^^^^^^^^Total Current^^^^^^^^^^^\n\n");
     printf("\n\n^^^^^^^^^^^Voltage Drop^^^^^^^^^^^\n\n");
     int Power,Voltage,c;
     printf("The type is:");
     scanf("%d",&c);
     switch (c)
        {
            case 1:
            printf("+++If the volage is in range of 120-220 for domestic purposes+++\n");
            printf("Enter the value of Power and Voltage\n");
            scanf("%d %d",&Power,&Voltage);
            result = load_current(Power,Voltage);
            printf("The seletion of wire on the bases of Load_current =  %d \n",result);
            if (result == 11)
             {
                 printf("The number and diameter of the wire = 1/0.044 ");
                 printf("The Cross-section of the wire = 0.0015 ");
             }
             else if (result == 13)
             {
                 printf("The number and diameter of the wire = 3/0.029 ");
                 printf("The Cross-section of the wire = 0.002 ");
             }
             else if (result == 16)
             {
                 printf("The number and diameter of the wire = 3/0.034 ");
                 printf("The Cross-section of the wire = 0.003 ");

             }
             else if (result == 21)
             {
                 printf("The number and diameter of the wire = 7/0.029");
                 printf("The Cross-section of the wire = 0.0045 ");

             }
              else if (result == 28)
             {
                 printf("The number and diameter of the wire = 7/0.036 ");
                 printf("The Cross-section of the wire = 0.007 ");

             }
              else if (result == 34)
             {
                 printf("The number and diameter of the wire = 7/0.044 ");
                 printf("The Cross-section of the wire = 0.01 ");

             }
             else
             {
                 printf("The Load current is high so use the case 2 for industrial purposes");
             }
             break;
         case 2:
            printf("+++If the volage is in range of 420-440 for industrial purposes+++\n");
            printf("Enter the value of Power and Voltage\n");
            scanf("%d %d",&Power,&Voltage);
            result = load_current(Power,Voltage);
            printf("The seletion of wire on the bases of Load_current =  %d \n",result);
             if (result == 43)
             {
                 printf("The number and diameter of the wire = 7/0.052 ");
                 printf("The Cross-section of the wire = 0.145 ");
             }
             else if (result == 56)
             {
                 printf("The number and diameter of the wire = 7/0.064 ");
                 printf("The Cross-section of the wire = 0.0225 ");
             }
             else if (result == 66)
             {
                 printf("The number and diameter of the wire = 19/0.044 ");
                 printf("The Cross-section of the wire = 0.03 ");

             }
             else if (result == 77)
             {
                 printf("The number and diameter of the wire = 19/0.044 ");
                 printf("The Cross-section of the wire = 0.04 ");

             }
              else if (result == 89)
             {
                 printf("The number and diameter of the wire = 19/0.054 ");
                 printf("The Cross-section of the wire = 0.05 ");

             }
              else if (result == 105)
             {
                 printf("The number and diameter of the wire = 19/0.064 ");
                 printf("The Cross-section of the wire = 0.06 ");

             }
             else
             {
                 printf("The load is too high such wire are not avalable in marke ");
             }
             break;
             default:
             printf("wrong choise : \n");
             break;
        }
}
