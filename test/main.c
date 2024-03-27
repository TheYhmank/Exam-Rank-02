#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int x;
	struct Node* next;
} Node;

void deallocate(Node** root)
{
	Node* curr = *root;
	while (curr)
	{
		Node* aux = curr;
		curr = curr->next;
		free(aux);
	}
	*root = NULL;
}

