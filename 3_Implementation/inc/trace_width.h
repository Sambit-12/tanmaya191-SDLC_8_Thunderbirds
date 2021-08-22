#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#ifndef __TRACE_WIDTH_H__
    #define __TRACE_WIDTH_H__
    /*
    First, calculate the Area:
Area[mils^2] = (Current[Amps]/(k*(Temp_Rise[deg. C])^b))^(1/c)

Then, calculate the Width:
Width[mils] = Area[mils^2]/(Thickness[oz]*1.378[mils/oz])
For IPC-2221 internal layers: k = 0.024, b = 0.44, c = 0.725
For IPC-2221 external layers: k = 0.048, b = 0.44, c = 0.725
where k, b, and c are constants resulting from curve fitting to the IPC-2221 curves.
*/
    #define internal_k 0.024
    #define internal_b 0.44
    #define internal_c 0.725
    #define external_k 0.048
    #define external_b 0.44
    #define external_c 0.725
    int trace_width_calculator();

    #endif