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
		print_list(list->next);
	}
}
