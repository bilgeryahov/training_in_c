#include <stdio.h>

// Here *pointer means that the parameter that this function will expect will be a pointer. 
// Basically this is the meaning of the star.
void changeViaPointer(int *pointer);

// Pointer to a pointer.
void changeViaPointerInBetween(int **pointer);

int main(){
	
	int number;
	number = 20;
	
	// Here *pointer means that the variable that is declared will be a pointer.
	int *pointer;
	
	// Actually asigning value to the variable.
	pointer = &number;
	
	// Pointer to a pointer.
	int **pointerInBetween;
	
	// Assigning value to the pointer of a pointer. 
	// Assigning the memory location where this pointer points to. 
	// So this is a pointer in between.
	pointerInBetween = &pointer;
	
	printf("The number before changing is %d\n", number);
	
	// Pass the pointer variable.
	changeViaPointer(pointer);
	printf("The number after pointer changing is %d\n", number);
	
	// Pass the pointer of a pointer variable.
	changeViaPointerInBetween(pointerInBetween);
	printf("The number after pointer in between changing is %d\n", number);
	
	return 0;
}

void changeViaPointer(int *pointer){
	
	// Okay, at this point we have received a variable called pointer,
	// which points to some value. In order to access this value
	// we need to use *pointer.
	// BUT THIS IS DIFFERENT FROM THE *pointer IN THE FUNCTION DECLARATION!!!
	*pointer = *pointer + 20;
}

void changeViaPointerInBetween(int **pointer){
	**pointer = **pointer + 20;
}
