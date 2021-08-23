/**
 * @file Thunderbirds.h
 * @author
 * @brief contains all the headers required.
 * @version 0.1
 * @date 2021-08-22
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef __THUNDERBIRDS_H__
#define __THUNDERBIRDS_H__
int result;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//# include <stdio_ext.h> //not supported by the vcode command line

//# include <conio.h> //not supported by the linux command line

//# include <dos.h> //not supported by the linux command line
void Welcome_screen(void);
void login_screen(void);
void title();
void Factor_s();
int Parameter_s();
int power_input();
int power_output();
int resistance();
int freq();
int speed();
int torque();
int secondary_turns();
int Wire_selection();
int load_current();
double parallel_inductance(int,double*);
double parallel_resistance(int,double*);
double parallel_capacitance(int,double*);
int parallel();
double series_inductance(int,double*);
double series_resistance(int,double*);
double series_capacitance(int,double*);
int series();

#endif  /* #define __THUNDERBIRDS_H__ */
