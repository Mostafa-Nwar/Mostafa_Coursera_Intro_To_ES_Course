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
 * @brief implementation file to print statistical analytics value on some data set
 *
 *	file operating on some data set (array test) and processing these datato generate the some statistics values like mean, manimum, minimum and median ; 
	also the file has some display procedures to print generated values and print the data set itself 
	also the file has a sorting decending procedure than sort the data set array 
 *
 *
 * @author Mostafa Samir Nwar 
 * @date 14/6/2018
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

/* Add other Implementation File Code Here */

void print_statistics(unsigned char * arr , int size ){
	
}
//**********************************************************
void print_array(unsigned char * arr , int size ){
}
//***********************************************************
int find_median(unsigned char * arr, int size){
}
//**************************************************************
int find_mean(unsigned char * arr, int size ){

}
//***************************************************************
int find_maximum(unsigned char * arr , int size){

}
//******************************************************************
int find_minimum(unsigned char * arr , int size ){
}
//**************************************************************
void sort_array(unsigned char * arr , int size ){
}

