#include <stdio.h>
#include <string.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int id;
};

void printBook(struct Books book);

void printBookPointer(struct Books *book);

int main(void){
	struct Books book1;
	struct Books book2;
	
	strcpy(book1.title, "C Programming");
	strcpy(book1.author, "Nuha Ali");
	strcpy(book1.subject, "C Programming Tutorial");
	book1.id = 123456;
	
	strcpy(book2.title, "Telecom Billing");
	strcpy(book2.author, "Zara Ali");
	strcpy(book2.subject, "Telecom Billing Tutorial");
	book2.id = 654321;
	
	printf("Pass book1\n\n");
	
	// Pass the book1.
	printBook(book1);
	
	printf("\nAnd now address of book2\n\n");
	
	// Pass the address of book2.
	printBookPointer(&book2);
	
	return 0;
}

void printBook(struct Books book){
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book id : %d\n", book.id);
}

void printBookPointer(struct Books *book){
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book id : %d\n", book->id);
}
