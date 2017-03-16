#include <stdio.h>
#define MAX 10

typedef int data;
data queue[MAX];
int front, rear, empty;

void init(){
	front = rear = 0;
	empty = 1;
}

void put(data i){
	// First check if the queue is full.
	if(front == rear && !empty){
		printf("The queue is full!\n");
		return;
	}
	
	queue[rear++] = i;
	
	// Check if you need to start from the beginning.
	if(rear >= MAX){
		rear = 0;
	}
	
	empty = 0;
}

data get(void){
	data x;
	if(empty){
		printf("The queue is empty!\n");
		return 0;
	}
	
	x = queue[front++];
	
	if(front >= MAX){
		front = 0;
	}
	
	if(front == rear){
		empty = 1;
	}
	
	return x;
}

int main(void){
	data number;
	int counter;
	
	init();
	
	for(counter = 0; counter < 2 * MAX; counter++){
		put(counter);
		number = get();
		printf("%d ", number);
	}
	
	printf("\n");
	
	// Let's make the queue full.
	for(counter = 0; counter <= MAX; counter++){
		put(counter);
	}
	
	// Let's make the queue empty.
	for(counter = 0; counter <= MAX; counter++){
		get();
	}
	
	return 0;
}
