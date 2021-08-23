/**
 * @file DutyCycle.c
 * @author your name (Sambit.Nayak@ltts.com)
 * @Finding the Duty Cycle and Output Voltage of Waveform by calculating the Time period at which Diode is on 
 * and Hence Finding the Duty cycle after Finding Duty cycle we are giving Input voltage and Duty cycle value to find Output 
 * Voltage of the waveform.
 * @version 0.1
 * @date 2021-08-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "DutyCycle.h"
int Parameter_sambit();// Function for Display of the Parameteres
float Dutycycle(float,float);//Function Defination for Finding Duty Cycle
float VoltageOutputofDutyCycle(float,float);//Function defination for Finding the output Voltage

// Entering the Display Page Parameter//
int Parameter_sambit()
{

   int ch;

   printf("\n1.Duty_cycle");
   printf("\n2.Output_voltage");
   printf("\nEnter your choice:");
   scanf("%d", &ch);
   return (ch);
}
//Function for calculating Duty Cycle//
    float Dutycycle(float Ton, float Toff)
    {
        float Duty_Cycle = (Ton/(Ton + Toff));

        return Duty_Cycle;
    }
 //Function for calculating The Output Voltage of the Waveform//
    float VoltageOutputofDutyCycle(float D, float Vo)
    {

        float Output_voltage = Vo*(D/(1-D));

        return Output_voltage;
    }
    //Main function For taking the values in terms of Variable and Display the desired output//
 int Sambit_Dutycycle()
        {
            float result, a ,b;
            switch (Parameter_sambit()){

           case 1:
              
                printf("Enter the Value of Ton and Toff: \n");
                scanf("%f %f",&a,&b);
                result=Dutycycle(a,b);
                printf("Duty cycle of the waveform is:%f",result);
                break;
              

           case 2:
            printf("Note That Duty Cycle is a Ratio so its Value should be less than 1: \n");
            printf("Enter the Value of D (Duty cycle): \n");
            printf("Enter the Value of of Input Voltage (V0): \n");

            scanf("%f %f",&a,&b);
            result=VoltageOutputofDutyCycle(a,b);
            printf("Voltage output of the waveform is:%f\n",result);
            break;

           
        }
      return 0;
}
