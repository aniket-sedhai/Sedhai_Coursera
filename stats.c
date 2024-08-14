/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This is the implementation file for stats.h
 *
 * This file implements the functions declared in stats.h. It has functions
 * to print an array containing unsigned chars, sort the array, find
 * statistics like mean, medium, maximum, and, minimum values.
 *
 * @author Aniket Sedhai
 * @date 08/14/2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}
/*********************************************************************************************************************/

void print_array(unsigned char* array_p, uint8_t array_length)
{

}

/*********************************************************************************************************************/

void print_statistics(unsigned char* array_p, uint8_t array_length)
{

}

/*********************************************************************************************************************/

double find_median(unsigned char* array_p, uint8_t array_length)
{
  return -1;
}

/*********************************************************************************************************************/

void sort_array(unsigned char* array_p, uint8_t array_length)
{
  return;
}

/*********************************************************************************************************************/

double find_mean(unsigned char* array_p, uint8_t array_length)
{
  return  0.0;
}

/*********************************************************************************************************************/

unsigned char find_minimum(unsigned char* array_p, uint8_t array_length)
{
  return 0;
}

/*********************************************************************************************************************/

unsigned char find_maximum(unsigned char* array_p, uint8_t array_length)
{
  return 0;
}

/*********************************************************************************************************************/

