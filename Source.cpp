//Finf the length of the LinkedList :
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
	int data;
	struct Node *next;
};
Node* push(struct Node *head_ref, int new_data)
{
	struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head_ref;
	head_ref = new_node;

	return head_ref;
}

int getLength(struct Node *head_ref)
{
	int count = 0;
	struct Node *head_ref2 = head_ref;
	while (head_ref2 != NULL)
	{
		head_ref2 = head_ref2->next;
		count++;
	}
	return count;
}
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d ", node->data);
		node = node->next;
	}
}
int main()
{
	struct Node *head = NULL, *head2 = NULL, *head3 = NULL, *head4 = NULL, *insert = NULL;
	head = push(head, 7);
	head2 = push(head, 1);
	head3 = push(head2, 2);
	head4 = push(head3, 9);
	printf("\n Created Linked list is : \n");
	printList(head4);
	printf("\n length of the Linked list is : %d \n", getLength(head4));

	_getch();
}