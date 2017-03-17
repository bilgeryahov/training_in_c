#include <stdio.h>

void changeViaPointer(int *pointer);
void changeViaPointerInBetween(int **pointer);

int main(){
	
	int number;
	number = 20;
	
	int *pointer;
	pointer = &number;
	
	int **pointerInBetween;
	pointerInBetween = &pointer;
	
	printf("The number before changing is %d\n", number);
	
	changeViaPointer(pointer);
	printf("The number after pointer changing is %d\n", number);
	
	changeViaPointerInBetween(pointerInBetween);
	printf("The number after pointer in between changing is %d\n", number);
	
	return 0;
}

void changeViaPointer(int *pointer){
	*pointer = *pointer + 20;
}

void changeViaPointerInBetween(int **pointer){
	**pointer = **pointer + 20;
}
