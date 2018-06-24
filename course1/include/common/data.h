#ifndef __DATA_H__
#define __DATA_H__

/*Function to Print ASCII String According to specific bases from 2 to 16 
* for a given standard int value 
* @Param data : is the given value to Convert 
* @Param ptr  : is the ptr to area where the string will be saved
* @param base : to determine tha base of the numbers in the string
* @return uint8_t : to return the string length as a maximum of 33 (sign digit)
*****************************************************/
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif 
