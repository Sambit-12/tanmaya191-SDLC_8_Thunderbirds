/**
 * @file kvl.c
 * @author viswak sena
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project.h"

// Initializing Kirchoff's Voltage law parameters
float kvl()
{
    printf("\n Kirchoff Voltage Law Calculation");
    // Getting the total number of loops from the user
    printf("\n Enter the number of loops : ");
    int n;
    scanf("%d",&n);    
    float a[n];

    int i;
    for (i=0;i<n;i++)
    {
        printf("\n Enter the voltage in loop%d : ",i+1);
        scanf("%f", &a[i]);

    }
        printf("The voltage is %0.2f",kvlcalc(n,a));
}

float kvlcalc(int n, float a[])
{
    float sum=0;
    for (int i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum;
}

