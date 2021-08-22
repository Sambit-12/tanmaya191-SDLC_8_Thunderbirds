#include <stdio.h>
#include "series.h"
double series_capacitance(int number_of_capacitors, double capacitor[])
{
   int loop_counter = 0;
   double series_equivalent_capacitance = 0;

   for (loop_counter = 0; loop_counter < number_of_capacitors; loop_counter++)
   {
      series_equivalent_capacitance = series_equivalent_capacitance + (1.0 / capacitor[loop_counter]);
   }
   series_equivalent_capacitance = 1.0 / series_equivalent_capacitance;

   return series_equivalent_capacitance;
}
/**
 * @brief choice taken from user for which passive element equivalent series is to be found
 * 
 * @return int 
 */
int series()
{
   int choice;
   printf("\nEnter which passive element's series equivalent you want to find \n");
   printf("\n Enter \nPress 1 'C' for capacitance \nPress 2 'I' for inductance \n");
   scanf("%d", &choice);

   
   if (choice == 1)
   {
      int number_of_capacitors, loop_counter = 0;
      double capacitor[100], series_equivalent_capacitance = 0;

      printf("\nEnter the number of Capacitors : ");
      scanf("%d", &number_of_capacitors);

      printf("\nEnter Value of Each Capacitance in microFarads: ");
      for (loop_counter = 0; loop_counter < number_of_capacitors; loop_counter++)
      {
         printf("\n Capacitance value%d : ", loop_counter + 1);
         scanf("%lf", &capacitor[loop_counter]);
      }

      series_equivalent_capacitance = series_capacitance(number_of_capacitors,capacitor);
      printf("\nEquivalent Series Capacitance : %lf microFarads", series_equivalent_capacitance);
   }
   if (choice == 2)
   {
      int number_of_inductors, loop_counter = 0;
      double inductor[100], series_equivalent_inductor = 0;

      printf("\nEnter the number of Inductors : ");
      scanf("%d", &number_of_inductors);

      printf("\nEnter Value of Each Inductance in milli Henry : ");
      for (loop_counter = 0; loop_counter < number_of_inductors; loop_counter++)
      {
         printf("\n Inductor value%d : ", loop_counter + 1);
         scanf("%lf", &inductor[loop_counter]);
      }

      series_equivalent_inductor = series_inductance(number_of_inductors, inductor);
      printf("\nEquivalent Series Inductance : %lf milli Henry", series_equivalent_inductor);
   }
   return 0;
}