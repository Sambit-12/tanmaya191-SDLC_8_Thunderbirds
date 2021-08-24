/**
 * @file tensiles.c
 * @author viswak sena
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project.h"

// Function definition for calculating the area of cylindrical conductors
float area_c(float diameter)
{
    float pi = 3.14;
    float area;
    area = (pi/4)*(diameter*diameter);
    return area;
}

 // Function defenition for calculating the area of shaped conductors
float area_s(float mass, float length)
{
    float area;
    area = (1000*mass)/(2.703*length);
    return area;
}
 // Initialization of tensile strength parameters
float tscalci(){
    printf("\n Tensile test of conductors");
    int option;
    printf("\n 1. Cylindrical conductors \n 2. Shaped conductors");
    printf("\n Enter the option:");
    scanf("%d",&option);

  // Calculation of tensile strenght if the conductor is cylindrical  
    if (option == 1)
    {
     tensile t1;
     printf("\n Enter the diameter:");
     scanf("%f", &t1.diameter);
     float area = area_c(t1.diameter);
     printf("\n The area of the conductor is:%f",area);
     printf("\n Enter the value of breaking load:");
     scanf("%f",&t1.load);
     float tensile_strenght = t1.load/area;
     printf("\n The Tensile strenght of the conductor is:%0.2f",tensile_strenght);  
     }

    // Calculation of tensile strenght if the conductor is other than cylindrical
    else if (option==2)
    {
        tensile t2;
        printf("\n Enter the mass:");
        scanf("%f", &t2.mass);
        printf("\n Enter the length:");
        scanf("%f",&t2.length);
        float area = area_s(t2.mass, t2.length);
        printf("\n Enter the value of breaking load:");
        scanf("%f",&t2.load);
        float tensile_strenght = t2.load/area;
        printf("\n The Tensile strenght of the conductor is:%0.2f",tensile_strenght);  
        
    }
      // Printing a default message for invalid option
     else
     {
     printf("\n You have entered an invalid option");
     }
}