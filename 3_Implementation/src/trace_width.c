/**
 * @file trace_width.c
 * @author Tanmaya Prasad Mangaraj (tanmaya.mangaraj@ltts.com)
 * @brief internal and external trace width calculator
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "trace_width.h"
/**
 * @brief trace width calculator
 * 
 * @return int 
 */
int trace_width_calculator(){
    double current, thickness, temperature_rise, ambient_temperature, trace_length;  
    double internal_trace_width, external_trace_width;
    double area_internal, area_external;
    // Input values from the user
    printf("Welcome to Trace Width Calculator");

    printf("Enter the value of current");
    scanf("%lf", &current);

    printf("Enter value of Thickness"); 
    scanf("%lf", &thickness);

    printf("Enter valur of temperature rise");
    scanf("%lf", &temperature_rise);

    printf("Enter the value of Ambient Temperature");
    scanf("%lf", &ambient_temperature);

    printf("Enter the value of trace length");
    scanf("%lf", &trace_length);

    //trace width calculation
    area_external= pow((current/(external_k* pow(temperature_rise,external_b))),(1/external_c));
    external_trace_width= area_external/(1.378*thickness);
    printf("External Trace width is %lf", external_trace_width);

    area_internal= pow((current/(internal_k* pow(temperature_rise,internal_b))),(1/internal_c));
    internal_trace_width= area_internal/(1.378*thickness);
    printf("External Trace width is %lf", external_trace_width);

    
    return 0;
}