#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>

int main(){
	printf("\nDeclare a node pointer \"head\" and initialize node pointer \"tail\" to {0,0}, then set the reference of head to the physical address of tail\n\n");
	struct node *head;
	
	//totally unecessary code segment
	//struct node tail = {0,0};
	//head = &tail;

	//struct node first = {10, &tail};
	//printf("%d\n",head->i);
	printf("insert 10,15,20,25 to the front of the head in respective sequence.\n\n");
	//you have to manually set the head to the return value of insert_front
	//I see no other way to reset the head to the beginning of the list	
	head = insert_front(head,10);
	head = insert_front(head,15);
	head = insert_front(head,20);
	head = insert_front(head,25);
	//printf("%d\n",head->next->next);
	//printf("%d\n",head->next->next);
	printf("print out all the values contained in the linked list by invoke \"print_list(head)\"\n\n");
	print_list(head);
	printf("\nfree the linked list by using \"free_list(head)\"\n\n");
	//printf("%d\n",free_list(head));
	free_list(head);
	
	printf("(YES, I WROTE MY OWN FREE() FUNCTION BECAUSE WHO EVER WROTE THE FREE FUNCTION IN STDLIB IS A BIG FAT IDIOT WHO WASTED HOURS OF MY LIFE SEARCHING ON STACK OVERFLOW AND OTHER FORUMS WHILE DOING THIS HW!!!!!!!!!!!!!!!!)\n");

	printf("\nlet's print list out:\n\n");
	print_list(head);

	printf("yeah! But seriously though, you have to look at my commented debug code to see the frustration I had when working with free() in stdlib. I DESERVE a trophy for that\n\n");
	//printf("also, lesson learned, whenever stdlib function failed to do the job, just write a custom function instead.\n");
	//printf("\nas you see, nodes have been filled by reference addresses, I don't know what's going on, I think it has to do with free(), but I'm just going to end right here\n\n");
	//printf("However if you deref the address of the node you'll get a:\n");
	//printf("%d\n",*head);
	//printf("%d\n",*free_list(head));
	//printf("\n(what the hell? how does this work? if the link between the nodes still exist yet why is this happening??? then why derefed \"head\" is NULL???what I'm I freeing???damn all those existentialists!!!)\n\n");
	return 0;
}
