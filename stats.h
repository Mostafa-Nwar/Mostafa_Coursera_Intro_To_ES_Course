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
 * @file stats.h 
 * @brief Interface File, presenting APIs for stats.c file 
 *
 *	Interface File, presenting APIs for stats.c file which have the following Function :
 *	operating on some data set (array test) and processing these datato generate the some statistics values like mean, manimum, minimum and median ; 
	also the file has some display procedures to print generated values and print the data set itself 
	also the file has a sorting decending procedure than sort the array elements
 * 	 
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print the Statistics of given array of numbers
 *
 * Print statistics value/results generated from a given array of integers 
 * Statistics like median, mean, maximum and minimum ; 
 *  
 * @param arr	an pointer to char acting as the base for the array
 * @param size	an int value detecting the size of array used for range check
 * 
 * @return void		return nothing 
 */
void print_statistics(unsigned char * arr, int size );

//***********************************************************
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param arr	an pointer to char acting as the base for the array
 * @param size	an int value detecting the size of array used for range check
 *
 * @return void		return nothing 
 */
void print_array(unsigned char * arr  ,int size );

//**************************************************************
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param arr	an pointer to char acting as the base for the array
 * @param size	an int value detecting the size of array used for range check
 *
 * @return int	median value of given array elements 
 */
int find_median( unsigned char * arr  , int size );

//**************************************************************
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param arr	an pointer to char acting as the base for the array
 * @param size	an int value detecting the size of array used for range check
 *
 * @return int	mean value of given array elements 
 */
int find_mean(	 unsigned char * arr  , int size );

//***************************************************************
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param arr	an pointer to char acting as the base for the array
 * @param size	an int value detecting the size of array used for range check
 *
 * @return int	maximum value of given array elements
 */
int find_maximum(unsigned char * arr  , int size );

//******************************************************************
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param arr	an pointer to char acting as the base for the array
 * @param size	an int value detecting the size of array used for range check
 *
 * @return int	minimum value of given array elements 
 */
int find_minimum(unsigned char * arr  , int size );

//**************************************************************
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param arr	an pointer to char acting as the base for the array
 * @param size	an int value detecting the size of array used for range check
 *
 * @return void		return nothing
 */
void sort_array(unsigned char * arr  , int size );

#endif /* __STATS_H__ */
