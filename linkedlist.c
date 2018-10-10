#include <stdio.h>
#include <stdlib.h>

struct node
{
	int i;
	struct node * nextNode;
};

void print_list (struct node * n) {
	if (n) {
		while (n) {
			printf("%p (value: %d) -> %p\n",n ,n->i, n->nextNode);
			n = n -> nextNode;
		}
	} else {
		printf("%p\n", n);
	}
}

struct node * insert_front (struct node * n, int value) {
	struct node * head = malloc(sizeof(struct node));
	head->i = value;
	head->nextNode = n;
	return head;
}

struct node * free_list (struct node * n) {
	while (n) {
		struct node * next = n->nextNode;
		free(n);
		n = next;
	}
	return n;
}