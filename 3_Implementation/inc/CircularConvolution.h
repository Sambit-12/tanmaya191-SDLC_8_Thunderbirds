/**
 * @file CircularConvolution.h
 * @author Sanjokta Motghare (Sanjokta.Motghare@ltts.com)
 * @Included all the header files of the program
 * @version 0.1
 * @date 2021-08-22
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef _CIRCULARCONVOLUTION_H
#define _CIRCULARCONVOLUTION_H

void circular_convolution();
void Fast_Circular_Convolve(float *x, int N, float *h, float *y);
void DITFFT_8_Point( int N, float x[8][2], float t[8][2]);
void DITFFT_4_Point( int N, float x[4][2], float t[4][2]);
#endif
