#include <stdio.h>

int main(){
	// Actual variable declaration.
	int var = 20;
	
	// Pointer variable declaration.
	int *ip;
	
	// Store the address of var in the pointer variable.
	ip = &var;
	
	// Print the address of var using itself.
	printf("The address of var using itself is %d\n", &var);
	
	// Print the address of var using the pointer variable.
	printf("The address of var using the pointer variable is %d\n", ip);
	
	// Access the value of var using the pointer variable.
	printf("The value of var using the pointer variable is %d\n", *ip);
	
	return 0;
}
