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


#include <stdint.h>
#include <stdio.h>
#include "platform.h"
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/******
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
/*	sort_array(test,SIZE);
	print_array(test,SIZE);
	print_statistics(test,SIZE);

}
******/

//**********************************************************
void print_statistics(unsigned char * arr , int size ){
	PRINTF("******* The previous Showed Array are processed\nAnd produced these Statistics \n ");
	PRINTF("******* The Value of median is  :%d \n",find_median (arr,size));
	PRINTF("******* The Value of mean is    :%d \n",find_mean   (arr,size));
	PRINTF("******* The Value of maximum is :%d \n",find_maximum(arr,size));
	PRINTF("******* The Value of minimum is :%d \n",find_minimum(arr,size));
	PRINTF("*************************************\n");
}
//**********************************************************
void print_array(unsigned char * arr , int size ){
#ifdef VERBOSE	
unsigned char i ; 
	PRINTF("The Array is as follow :\n");
	for(i=0;i<size;++i){
	PRINTF("Elemet Number %d  is : %d \n",i+1,arr[i]);
	}
#else
	PRINTF("*************** VERBOSE not defined **********************\n");
#endif 
}
//***********************************************************
int find_median(unsigned char * arr, int size){
/*as requirment for a median the array must be sorted so */
sort_array(arr,size);
/*check if the size even or anything else */
if((size%2)==0){
	
	return((int)((arr[size/2]+arr[(size/2)+1])/2)) ;
}
else {
	return(arr[(int)(size/2)]);
}


}
//**************************************************************
int find_mean(unsigned char * arr, int size ){
 unsigned char i ; 
 unsigned int sum=0 ;
	for(i=0;i<size;++i){
	sum= sum+arr[i];
	}
return ((int)(sum/size));
}
//***************************************************************
int find_maximum(unsigned char * arr , int size){
 unsigned char i ;
 unsigned char max=0 ; 
	for(i=0;i<size;++i){
		if(max < arr[i]){
		max=arr[i];
		}
		else {/*Do nothing*/}
	}
	return max; 

}
//******************************************************************
int find_minimum(unsigned char * arr , int size ){
 unsigned char i ;
 unsigned char min=255 ; 
	for(i=0;i<size;++i){
		if(min > arr[i]){
		min=arr[i];
		}
		else {/*Do nothing*/}
	}
	return min; 
}
//**************************************************************
void sort_array(unsigned char * arr , int size ){
	unsigned char i,j ; 
	int temp ; 
for(j=1;j<SIZE;++j){
	for(i=0;i<size-j;++i){
		if(arr[i]<arr[i+1]){
		
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1]=temp; 
		
		}
		else {/*Do nothing*/ }
	}
}
}

