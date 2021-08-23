/**
 * @file project.h 
 * @author viswak sena
 * @brief Header files for ohm'law, Kirchoff's current and voltage law, Tensile strength test for conductors
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>

#ifndef __PROJECT_H__
#define __PROJECT_H__

// Declaration of ohm's law
/**
 * @brief Voltage calculation using ohm's law
 * 
 * @param current 
 * @param resistance 
 * @return float 
 */
float ohm_v(float current, float resistance);

/**
 * @brief Current calculation using ohm's law 
 * 
 * @param voltage 
 * @param resistance 
 * @return float 
 */
float ohm_c(float voltage, float resistance);

/**
 * @brief Resistance calculation using ohm's law
 * 
 * @param voltage 
 * @param current 
 * @return float 
 */
float ohm_r(float voltage, float current);
float ohm();

/**
 * @brief Tensile strenght 
 * 
 */
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
/**
 * @brief Area of cylindrical conductors
 * 
 * @param diameter 
 * @return float 
 */
float area_c(float diameter);

/**
 * @brief Area of shaped parameters
 * 
 * @param mass 
 * @param length 
 * @return float 
 */
float area_s(float mass, float length);

/**
 * @brief Tensile strength of conductors
 * 
 * @return float 
 */
float tscalci();

// Function declaration for Kirchoff's voltage law
/**
 * @brief Kirchoff's Voltage law
 * 
 * @return float 
 */
float kvl();
float kvlcalc(int n,float a[]);

// Function declaration of Kirchoff's Current law
/**
 * @brief Kirchoff's current law
 * 
 * @return float 
 */
float kcl();

#endif

