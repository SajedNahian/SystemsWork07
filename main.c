#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
	printf("Inserting 1 to front: \n");
	struct node * myNumbers = insert_front(myNumbers, 1);
	print_list (myNumbers);
	
	printf("-------------------------------\n");
	printf("Inserting 2 to front: \n");
	struct node * myNumbers1 = insert_front(myNumbers, 2);
	print_list (myNumbers1);

	printf("-------------------------------\n");
	printf("Inserting 3 to front: \n");
	struct node * myNumbers2 = insert_front(myNumbers1, 3);
	print_list (myNumbers2);

	printf("-------------------------------\n");
	printf("Freeing list:\n");
	myNumbers2 = free_list(myNumbers2);
	printf("EXPECTING NO VALUE: \n");
	printf("%p\n", myNumbers2);
	return 0;
}