#include <stdint.h>
#include"data.h" /*Including same interface file as a convention */
#include"memory.h" /*including interface file to use my_reverse Function*/
/**************************************************************************/
/**************************************************************************/
/*Function to Print ASCII String According to specific bases from 2 to 16 
* for a given standard int value 
* @Param data : is the given value to Convert 
* @Param ptr  : is the ptr to area where the string will be saved
* @param base : to determine tha base of the numbers in the string
* @return uint8_t : to return the string length as a maximum of 33 (sign digit)
**************************************************************************/
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
uint8_t counter = 0;
uint8_t rem = 0 ; 
/*Check if the arguments are right according to given conditions*/
if (!(((base<2)||(base>16))||(ptr==0))){	
	if(data==0){/* data is zero and can not operate on*/
		*(ptr+counter)='0';
		counter++;
	}
	else if(data<0){/*data is negative*/
		*(ptr)='-';/*Print Negative Sign first*/
		counter++;/* The Negative Sign Digit*/		
		data = data *(-1);/*Transform Negaive # to Positive*/		
			while(data!=0){/*Transformatio Alogirthm*/
			rem = data % base ; 
 			if(rem>9)
				*(ptr+counter)=rem+55;/*value for Characters index from ASCII Table*/
 			else
				*(ptr+counter)=rem+48;/*value for Numbers index from ASCII Table*/
 			data = data /base ; 
			counter++;/*move to next Digit*/
			}
		my_reverse((ptr+1),(size_t)(counter-1));/*using this function to reverse order of the string to display it in a correct way*/
	}
	else {/*data is positive*/
		while(data!=0){/*Transformatio Alogirthm*/
		rem = data % base ; 
 		if(rem>9)
			*(ptr+counter)=rem+55;/*value for Characters index from ASCII Table*/
 		else
			*(ptr+counter)=rem+48;/*value for Numbers index from ASCII Table*/
		data = data / base ; 
 		counter++;/* move to next Digit */
		}
		my_reverse(ptr,(size_t)counter);/*using this function to reverse order of the string to display it in a correct way*/
	}
	
	

	*(ptr+counter)=0;/*Null Terminator for a string*/
	counter++;/*The Null Operator Counted Digit*/
}
else {/*Do nothing */}
return counter ; 
}/*Function End braces*/
/*****************************************************************************/
/*****************************************************************************/
/*Function to Print a standard int depending on the character string for specific base from 2 to 16 
* @Param ptr  : is the ptr to area where the string will be saved
* @param digits: is the length of the string including the null operator 
* @param base : to determine tha base of the numbers in the string
* @return uint8_t : to return the string length as a maximum of 33 (sign digit)
**************************************************************************/
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
int32_t ret=0; 
uint32_t tempbase = 1 ; 
/*Check if the arguments are right according to given conditions*/
if (!(((base<2)||(base>16))||(ptr==0)||(digits==0))){
	if(*(ptr)==0){/*if string is "0"*/
		ret = 0 ; 	
	}	

	else if (*(ptr)=='-'){/*if string has negative sign */
		while((digits-2)!=0){/*check if reached the sign digit, and neglect negative sign digit and null terminator digit */
		if(  ( (*(ptr+digits-2)) >='A') && ( (*(ptr+digits-2)) <='F')  ){		
			ret = ret + ((	(*(ptr+digits-2))	-55)*tempbase);
			tempbase = tempbase * base ; 
		}
		else if (  ( (*(ptr+digits-2)) >='0') && ( (*(ptr+digits-2)) <='9')  ){
			ret = ret + ((	(*(ptr+digits-2))	-48)*tempbase);
			tempbase = tempbase * base ; 
		}
		else{/*Do nothing*/}
		digits=digits-1; 
		}
		ret = ret * (-1);
	}
	else{/*if String don't have negative sign*/
		while((digits-1)!=0){/*check if reached the first digit, and neglect null terminator digit */
		if(  ( (*(ptr+digits-2)) >='A') && ( (*(ptr+digits-2)) <='F')  ){		
			ret = ret + ((	(*(ptr+digits-2))	-55)*tempbase);
			tempbase = tempbase * base ; 
		}
		else if (  ( (*(ptr+digits-2)) >='0') && ( (*(ptr+digits-2)) <='9')  ){
			ret = ret + ((	(*(ptr+digits-2))	-48)*tempbase);
			tempbase = tempbase * base ; 
		}
		else{/*Do nothing*/}
		digits=digits-1; 
		}
	}

}
else {/*Do nothing */}
return ret ; 
}/*Function End braces*/
