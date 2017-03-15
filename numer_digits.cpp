/**
* Calculate the number of digits of a given number.
*/

#include<stdio.h>
unsigned number = 865;

int main(void){
	unsigned digits, number_copy;
	number_copy = number;
	for(digits = 0; number > 0; number /= 10, digits++);
	printf("The number of digits in %u is %u\n", number_copy, digits);
	return 0;
}
