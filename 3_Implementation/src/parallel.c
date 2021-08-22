
/**
 * @file parallel.c
 * @author Saivardhan Reddy (ssaivardhan1919@gmail.com)
 * @brief To calculate Capacitance and inductance in parallel connection
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "../inc/Thunderbirds.h"
double parallel_inductance(int number_of_inductors, double inductor[])
{
   int loop_counter = 0;
   double parallel_equivalent_inductor = 0;

   for (loop_counter = 0; loop_counter < number_of_inductors; loop_counter++)
   {
      parallel_equivalent_inductor = parallel_equivalent_inductor + (1.0 / inductor[loop_counter]);
   }
   parallel_equivalent_inductor = 1.0 / parallel_equivalent_inductor;
   return parallel_equivalent_inductor;
}
/**
 * @brief parallel equivalent capacitor function
 * 
 * @param number_of_capacitors 
 * @param capacitor 
 * @return double 
 */
double parallel_capacitance(int number_of_capacitors, double capacitor[])
{
   int loop_counter = 0;
   double parallel_equivalent_capacitance = 0;

   for (loop_counter = 0; loop_counter < number_of_capacitors; loop_counter++)
   {
      parallel_equivalent_capacitance = parallel_equivalent_capacitance + capacitor[loop_counter];
   }
   return parallel_equivalent_capacitance;
}
/**
 * @brief choice from user about the parallel passive element they want to find
 * 
 * @return int 
 */
int parallel()
{
   int choice;
   printf("\nEnter which passive element's parallel equivalent you want to find \n");
   printf("\n Enter \nPress 1 'C' for capacitance \nPress 2 'I' for inductance \n");
   scanf("%d", &choice);
   if (choice == 1)
   {
      int number_of_capacitors, loop_counter=0;
      double capacitor[100],parallel_equivalent_capacitance;
      printf("\nEnter the number of Capacitors : ");
      scanf("%d", &number_of_capacitors);

      printf("\nEnter Value of Each Capacitance in microFarads: ");
      for (loop_counter = 0; loop_counter < number_of_capacitors; loop_counter++)
      {
         printf("\n Capacitance value%d : ", loop_counter + 1);
         scanf("%lf", &capacitor[loop_counter]);
      }

      parallel_equivalent_capacitance = parallel_capacitance(number_of_capacitors, capacitor);
      printf("\nEquivalent Parallel Capacitance : %lf microFarads", parallel_equivalent_capacitance);
   }
   
   if (choice == 2)
   {
      int number_of_inductors, loop_counter = 0;
      double inductor[100], parallel_equivalent_inductor = 0;

      printf("\nEnter the number of Inductors : ");
      scanf("%d", &number_of_inductors);

      printf("\nEnter Value of Each Inductance in milli Henry : ");
      for (loop_counter = 0; loop_counter < number_of_inductors; loop_counter++)
      {
         printf("\n Inductor value%d : ", loop_counter + 1);
         scanf("%lf", &inductor[loop_counter]);
      }

      parallel_equivalent_inductor = parallel_inductance(number_of_inductors, inductor);
      printf("\nEquivalent Parallel Inductance : %lf milli Henry", parallel_equivalent_inductor);
   }
   return 0;
}