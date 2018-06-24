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
 * @file memory.c
 * @brief Abstraction of memory read and write operations
 *
 * This implementation file provides an abstraction of reading and
 * writing to memory via function calls. There is also a globally
 * allocated buffer array used for manipulation.
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#include <stdint.h>
#include <stdlib.h>
#include "memory.h"
/***********************************************************
 Function Definitions
***********************************************************/
void set_value(char * ptr, unsigned int index, char value){
  ptr[index] = value;
}
/********************************************/
void clear_value(char * ptr, unsigned int index){
  set_value(ptr, index, 0);
}
/********************************************/
char get_value(char * ptr, unsigned int index){
  return ptr[index];
}
/**********************************************/
void set_all(char * ptr, char value, unsigned int size){
  unsigned int i;
  for(i = 0; i < size; i++) {
    set_value(ptr, i, value);
  }
}
/************************************************/
void clear_all(char * ptr, unsigned int size){
  set_all(ptr, 0, size);
}

/*****************************************************************/
/*****************************************************************/
/******************* My Implenmented Functions ******************/
/****************************************************************/
/** Function to Copy memory bytes with checking for Overlapping */
/* @param src >> pointer the  start address  of source bytes ****/
/* @param dst >> pointer the  start address  of destination bytes*/
/* @param length >> Length from start address to stop address of bytes*/
/* @return uint8_t >> pointer to start address of copied bytes */
uint8_t * my_memmove(uint8_t * src , uint8_t * dst , size_t length){
size_t i;
uint8_t * vsrc = (uint8_t*)malloc(length);
for(i=0;i<length;i++)
	*(vsrc+i)=*(src+i);
for(i=0;i<length ;i++){
	*(dst+i)=*(vsrc+i);
}
return dst ; 
}

/************************************************/
/** Function to copy memory bytes without Checking for Overlapping */ 
/* @param src >> pointer the  start address  of source bytes ****/
/* @param dst >> pointer the  start address  of destination bytes*/
/* @param length >> Length from start address to stop address of bytes*/
/* @return uint8_t >> pointer to start address of copied bytes */
uint8_t * my_memcopy(uint8_t * src , uint8_t * dst , size_t length){
size_t i;
for(i=0;i<length ;i++){
*(dst+i)=*(src+i);
}
return dst ; 
}
/************************************************/
/** Function to Set some bytes of memory to a certain value */
/* @param src >> pointer the  start address  of source bytes ****/
/* @param length >> Length from start address to stop address of bytes*/
/* @param value >> Set value to put in bytes */
/* @return uint8_t >> pointer to start address of initialized bytes */
uint8_t * my_memset(uint8_t * src , size_t length , uint8_t value){
size_t i;
for(i=0;i<length ;i++){
*(src+i)=value;
}
return src ; 
}
/************************************************/
/** Function to Set some bytes of memory to Zero */
/* @param src >> pointer the  start address  of source bytes ****/
/* @param length >> Length from start address to stop address of bytes*/
/* @return uint8_t >> pointer to start address of zero bytes */
uint8_t * my_memzero(uint8_t * src , size_t length ){
size_t i;
for(i=0;i<length ;i++){
*(src+i)=0;
}
return src ; 
}
/************************************************/
/** Function to Reverse order of some bytes in memory */
/* @param src >> pointer the  start address  of source bytes ****/
/* @param length >> Length from start address to stop address of bytes*/
/* @return uint8_t >> pointer to start address of reversed bytes */
uint8_t * my_reverse(uint8_t * src , size_t length){
size_t i;
uint8_t temp ; 
for(i=0;i<length/2 ;++i){
temp = *(src+i);
*(src+i)=*(src+length-1-i);
*(src+length-1-i)=temp ; 
}
return src ; 
}
/************************************************/
/** Function to Reserve determined number of 32-bit words */
/* @param length >> size of Dynamically Allocated bytes, number of bytes */
/* @return int32_t >> pointer to start address of allocated bytes */
int32_t * reserve_words(size_t length){
return ((int32_t *)malloc(sizeof(int32_t)*length)) ; 
}
/************************************************/
/** Function to free Dynamic Allocated Memory */
/* @param src >> pointer the  start address  of Allocated bytes ****/
/* @return void >> return nothing */
void * free_words(int32_t * src){
free((void * )src);
}
