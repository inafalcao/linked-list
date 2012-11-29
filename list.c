//#include "list.h"
#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node *prox;
};


typedef struct node Node;

void printList(Node *list);
Node *findElement(Node *list, int element);
int isEmpty(Node *list);
void insert(Node *list, int element);

/*
* Prints the list.
*
*/
void printList(Node *list) {
	Node *p;
	for (p = list->prox; p != NULL; p = p->prox) {
		printf(" %d -", p->info);
	}
	printf("\n");
}

/*
*
*
*/
Node *findElement(Node *list, int element) {
	Node *p = list;
	while(p->info != element) {
		p = p->prox;
	}
	return p;
}

/*
*
*
*/
int isEmpty(Node *list) {
	return (list == NULL);
}

void insert(Node *list, int element) {
	Node *newNode;
	newNode = (Node*) malloc(sizeof(Node));
	newNode->info = element;
	newNode->prox = list->prox;
	list->prox = newNode;	
}

int main(int argc, char const *argv[])
{
	Node *list;
	list->prox = NULL;
	int element1 = 1;
	int element2 = 2;
	printf(NULL);

	printList(list);
	insert(list, element1);
	insert(list, element2);

	printList(list);

	//return 0;
}

