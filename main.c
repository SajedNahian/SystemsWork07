#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
	struct node * myNumbers;
	printf("Printing empty linked list:\n");
	print_list (myNumbers);

	printf("-------------------------------\n");
	printf("Inserting 1 to front: \n");
	myNumbers = insert_front(myNumbers, 1);
	print_list (myNumbers);
	
	printf("-------------------------------\n");
	printf("Inserting 2 to front: \n");
	myNumbers = insert_front(myNumbers, 2);
	print_list (myNumbers);

	printf("-------------------------------\n");
	printf("Inserting 3 to front: \n");
	myNumbers = insert_front(myNumbers, 3);
	print_list (myNumbers);

	printf("-------------------------------\n");
	printf("Freeing list:\n");
	myNumbers = free_list(myNumbers);
	print_list(myNumbers);

	return 0;
}