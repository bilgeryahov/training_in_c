#include <stdio.h>

// Here *pointer means that the parameter that this function 
// will expect will be a pointer. 
void changeViaPointer(int *pointer);

// Pointer of a pointer.
void changeViaPointerInBetween(int **pointer);

int main(){
	
	int number;
	number = 20;
	
	// Here *pointer means that the variable that is declared will be a pointer.
	int *pointer;
	
	// Actually asigning value to the pointer variable.
	pointer = &number;
	
	// Pointer of a pointer.
	int **pointerInBetween;
	
	// Assigning value to the pointer of a pointer. 
	// Assigning the memory location where this pointer points to. 
	// So this is a pointer in between.
	pointerInBetween = &pointer;
	
	printf("The first pointer points to %d\n", pointer);
	
	printf("The second pointer points to %d\n", pointerInBetween);
	
	printf("The value of the first pointer is %d\n", *pointer);
	
	printf("The value of the second pointer is %d\n", *pointerInBetween);
	
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
	
	// **pointer explanation:
	// Only pointer is the memory location
	// *pointer  is the value of that memory location, which in this specific case is also a memory location
	// **pointer is the value of what the other pointer points to.
	**pointer = **pointer + 20;
}
