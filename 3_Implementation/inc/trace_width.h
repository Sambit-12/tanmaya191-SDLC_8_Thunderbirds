
#ifndef __TRACE_WIDTH_H__
    #define __TRACE_WIDTH_H__
    
    #include<stdio.h>
    #include<stdlib.h>
    #include <math.h>
    #define internal_k 0.024
    #define internal_b 0.44
    #define internal_c 0.725
    #define external_k 0.048
    #define external_b 0.44
    #define external_c 0.725
    double trace_width_inputs();
    double internal_trace_width_calculator(double current,double thickness, double temperature_rise,double ambient_temperature,double trace_length);
    double external_trace_width_calculator(double current,double thickness, double temperature_rise,double ambient_temperature,double trace_length);

    #endif
