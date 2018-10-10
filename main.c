#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>

int main(){
	printf("\nDeclare a node pointer \"head\" and initialize node pointer \"tail\" to {0,0}, then set the reference of head to the physical address of tail\n\n");
	struct node *head;
	struct node tail = {0,0};
	head = &tail;
	//struct node first = {10, &tail};
	//printf("%d\n",head->i);
	printf("insert 10,15,20,25 to the front of the head in respective sequence.\n\n");
	head = insert_front(head,10);
	head = insert_front(head,15);
	head = insert_front(head,20);
	head = insert_front(head,25);
	//printf("%d\n",head->next->next);
	//printf("%d\n",head->next->next);
	printf("print out all the values contained in the linked list by invoke \"print_list(head)\"\n\n");
	print_list(head);
	printf("print out the result of the \"free_list(head)\" we got:\n\n");
	printf("%d\n",free_list(head));
	printf("deref that value, then we got:\n\n");
	printf("%d\n",*free_list(head));
	//print_list(head);
	return 0;
}
