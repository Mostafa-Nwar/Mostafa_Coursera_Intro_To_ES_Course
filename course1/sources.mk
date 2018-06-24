#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************
#------------------------------------------------------------------
# Author : Mostafa Samir Nawar 
# Date : 19/6/2018
#*************************************************************
# Based on Input Overriding argument from the Command Line, \
# here i made a conditional checking to determine the selected \
# PLATFORM to Choose which source files to operate with and which \
# directories to search for the header files or another files 
#*************************************************************

ifeq ($(PLATFORM),HOST)
  SOURCES =  ./src/main.c \
             ./src/memory.c \
             ./src/data.c \
             ./src/course1.c \
             ./src/stats.c   
  INCLUDES =  -I ./include/common
#**********************************************
#*********** In case of MSP platform **********
else 
  SOURCES =  ./src/main.c \
             ./src/memory.c \
             ./src/data.c \
             ./src/course1.c \
             ./src/stats.c \
          ./src/interrupts_msp432p401r_gcc.c \
          ./src/system_msp432p401r.c \
          ./src/startup_msp432p401r_gcc.c
  INCLUDES = -I ./include/common \
           -I ./include/msp432 \
           -I ./include/CMSIS  
endif 
