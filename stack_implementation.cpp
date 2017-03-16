#include<stdio.h>
#define MAX 10

typedef int data;
data stack[MAX];
int top;

void init(){
	top = 0;
}

void push(data i){
	if(top == MAX){
		printf("The stack is full! \n");
	}
	else{
		stack[top++] = i;
	}
}

data pop(void){
	if(top == 0){
		printf("The stack is empty! \n");
		return -1;	
	}
	else{
		return stack[--top];
	}
}

int isEmpty(void){
	return (top == 0);
}

int main(void){
	data number;
	init();
	
	printf("Enter a whole number: ");
	scanf("%d", &number);
	
	// Read values and enter into the stack
	// until you receive a zero.
	while(number != 0){
		push(number);
		printf("Enter a whole number: ");
		scanf("%d", &number);
	}
	
	printf("You entered: \n");
	
	// Remove and output all elements from the stack.
	while(!isEmpty()){
		printf("%d\n", pop());
	}
	
	printf("\n");
	return 0;
}
