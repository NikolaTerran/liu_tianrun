#include <stdio.h>
#include "linkedlist.h"

//struct node { int i; struct node *next;};

void print_list(struct node *list){
	//struct node *count = list;	
	//do{	
	//	printf("%d\n",list->i);
	//	list = list->next;		
	//}while(list->next);
	if(list->next){
		printf("%d\n",list->i);
		//printf("%d\n",list->next); //print next node's address
		print_list(list->next);
	}
	else{	//else is included because the stack value is still on the stack
		printf("%d\n",list->i);
	}
}
