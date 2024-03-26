#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int x;
	struct Node* next;
} Node;

void insert_end(Node** root, int src)
{
	Node* new_node = malloc(sizeof(Node));
	if (!(new_node))
		exit(2);

	new_node->next = NULL;
	new_node->x = src;

	if (*root == NULL)
	{
		root = &new_node;
		return;
	}
	
	Node* curr = *root;
	while (curr->next)
		curr = curr->next;
	curr->next = new_node;	
}

void deallocate(Node** root)
{

} //do this by your own

int main(int argc, char const *argv[])
{
	Node* root = malloc(sizeof(Node));
	root->next = NULL;
	root->x = 15;

	insert_end(&root, 23);

	Node* curr = root;
	while (curr)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	return (0);
}


/* V02
int main(int argc, char const *argv[])
{
	Node root;
	root.x = 15;
	root.next = malloc(sizeof(Node));
	root.next->x = -8;
	root.next->next = malloc(sizeof(Node));
	root.next->next->x = -2;
	root.next->next->next = NULL;

	Node* curr = &root;
	while (curr)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}

	free(root.next->next);
	free(root.next);
	return 0;
}
*/

/* V01
int main(int argc, char const *argv[])
{
	Node root;
	root.x = 15;
	root.next = malloc(sizeof(Node));
	root.next->x = -1;
	root.next->next = NULL;

	printf("First Node element: %d\n", root.x);
	printf("Second Node element: %d", root.next->x);

	free(root.next);
	return 0;
}
*/
