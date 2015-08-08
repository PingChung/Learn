#include <stdlib.h>
#include <stdio.h>
#include "linklist.h"


int main(void)
{
	NODE *first, *node;

	first = createList(3);
	printList(first);
	node = searchList(*first, 33);

	if(node != NULL)
		printf("%d\n", node->data);
	else
		printf("It doesn't in list\n");

	freeList(first);

}