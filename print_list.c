#include <stdio.h>
#include "linkedlist.h"

//struct node { int i; struct node *next;};

void print_list(struct node *list){
	//struct node *count = list;	
	//do{	
	//	printf("%d\n",list->i);
	//	list = list->next;		
	//}while(list->next);
	if(!list){
		printf("*****print_list.c DIAG statement*****\nThis list is NULL, or 0 if you prefer, this section of the \"print_list.c\" code is invoked when the linkedlist pointer is equal to NULL, and avoid running into seg-fault\n\n");	
	}
	else if(list->next){
		printf("%d\n",list->i);
		//printf("%d\n",list->next); //print next node's address
		print_list(list->next);
	}
	else{	//else is included because the stack value is still on the stack
		printf("%d\n",list->i);
	}
}
