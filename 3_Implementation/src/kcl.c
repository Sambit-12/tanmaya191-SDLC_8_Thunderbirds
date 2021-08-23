/**
 * @file kcl.c
 * @author viswak sena
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project.h"

float kcl()
{
    printf("\n ***************Kirchoff's current law*************** ");
    int nodes;
    // Getting total number of nodes from the use
    printf("\n Enter the number of nodes: ");
    scanf("%d",&nodes);
    int in;
    // Getting number of nodes where current flows inwards 
    printf("\n Enter the number of nodes where current flows inwards: ");
    scanf("%d",&in);
    int out;
    // Getting number of nodes where current flows outwards
    printf("\n Enter the number of nodes where current flows outwards: ");
    scanf("%d", &out);
    if (in + out == nodes) //condition if total number of nodes is equal to sum of inwards and outwards nodes
    {
        float a[in], b[out], sumofin =0, sumofout =0;
        for(int i=0;i< in;i++)
        {
            printf("\n Inward Current%d : ",i+1);
            scanf("%f",&a[i]);
            sumofin += a[i];
        }
        for(int i=0;i< out;i++)
        {
            printf("\n Outward Current%d : ",i+1);
            scanf("%f",&b[i]);
            sumofout += b[i];
        }
        printf("\nVoltage entering the junction : %0.2f",sumofin);
        printf("\nVoltage leaving the junction : %0.2f",sumofout);
    }
    else
    {
        printf("Entered invalid number of nodes");
    }
    
}