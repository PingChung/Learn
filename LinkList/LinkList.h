#include <stdlib.h>
#include <stdio.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE* createList(int);
void printList(NODE *);
void freeList(NODE *);
NODE* searchNode(NODE *, int);
void insertNode();

NODE* createList(int lenth)
{
	int i;
	NODE *first, *current, *previous;

	for(i=0; i<lenth; i++)
	{
		current = (NODE*) malloc(sizeof(NODE));
		printf("Data for node: ");
		scanf("%d", &(current->data));
		current->next = NULL;

		if (i == 0)
			first = current;
		else
			previous->next = current;
		previous = current;
	}

	return first;
}

void printList(NODE *first)
{
	NODE *current = first;

	if (current == NULL)
		printf("List doesn't exit!\n");
	else
	{
		while(current != NULL)
		{
			printf("%d -> ", current->data);
			current = current->next;
		}
		printf("NULL\n");
	}
}

void freeList(NODE *first)
{
	NODE *current, *temp;
	current = first;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

}

NODE* searchNode(NODE *first, int num)
{
	NODE *current = first;

	while (current != NULL)
	{
		if (current->data == num)
			return current;
		else
			current = current->next;
	}

	return NULL;
}