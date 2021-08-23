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
#include <math.h>
/**
 * @brief trace width calculator
 * 
 * @return int 
 */

// internal calculation
double internal_trace_width_calculator(double current,double thickness, double temperature_rise,double ambient_temperature,double trace_length){
    
    //test case check
    if((current==0)||(thickness==0)||(temperature_rise==0)||(ambient_temperature==0)||(trace_length==0)){
        return 0;
    }

    double internal_trace_width;
    double area_internal;
    // Input values from the user


    //trace width calculation

    area_internal= pow((current/(internal_k* pow(temperature_rise,internal_b))),(1/internal_c));
    internal_trace_width= area_internal/(1.378*thickness);
    //printf("External Trace width is %lf", internal_trace_width);

    
    return internal_trace_width;
}

// external calculation
double external_trace_width_calculator(double current,double thickness, double temperature_rise,double ambient_temperature,double trace_length){
    
    //test case check
    if((current==0)||(thickness==0)||(temperature_rise==0)||(ambient_temperature==0)||(trace_length==0)){
        return 0;
    }
    
    double external_trace_width;
    double area_external;
    // Input values from the user


    //trace width calculation
    area_external= pow((current/(external_k* pow(temperature_rise,external_b))),(1/external_c));
    external_trace_width= area_external/(1.378*thickness);
    //printf("External Trace width is %lf", external_trace_width);

    

    
    return external_trace_width;
}

double trace_width_inputs(){
    double current, thickness, temperature_rise, ambient_temperature, trace_length;  
    double internal_trace_width, external_trace_width;
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

    internal_trace_width= internal_trace_width_calculator(current,thickness,temperature_rise,ambient_temperature,trace_length);

    external_trace_width= external_trace_width_calculator(current,thickness,temperature_rise,ambient_temperature,trace_length);

    printf("Internal Trace width is %lf", internal_trace_width);
    printf("External Trace width is %lf", external_trace_width);
}


