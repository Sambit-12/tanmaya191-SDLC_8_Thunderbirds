#include<stdio.h>
#include<stdlib.h>

#ifndef __PROJECT_H__
#define __PROJECT_H__

// Declaration of ohm's law
float ohm_v(float current, float resistance);
float ohm_c(float voltage, float resistance);
float ohm_r(float voltage, float current);
float ohm();

// Structure declaration for Tensile strength calculation
typedef struct
{
 float diameter;
 float mass;
 float length;
 float area;
 float load;    
}tensile;

// Function declaration for Tensile strength calculation
float area_c(float diameter);
float area_s(float mass, float length);
float tscalci();

// Function declaration for Kirchoff's voltage law
float kvl();
float kvlcalc(int n,float a[]);

// Function declaration of Kirchoff's Current law
float kcl();

#endif

