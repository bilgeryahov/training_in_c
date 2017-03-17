#include <stdio.h>
#include <stdlib.h>

typedef int data;
typedef int keyType;

struct list{
	keyType key;
	data info;
	struct list *next;
};

// Inserts a node at the beginning of the linked list
void insertBeginning(struct list **L, keyType key, data x){
	
}
