#include <stdio.h>
//#include <stdlib.h>
#include "linkedlist.h"

void custom_free(struct node *p){
	//if(!p){
	//}
	//else{
		p->next = 0;
		p->i = 0;
		printf("****node freed****\n");
	//}
}

struct node* free_list(struct node *list){
	if(list->next){
		free_list(list->next);
		//printf("wut");
		//cus_free(list->next); //This will cause double free or corruption error
		//free(list->next);     //same for this
		custom_free(list);
	}
	else{	//else is included because the stack value is still on the stack
		//free(list->next);
		custom_free(list);
	}
	return list;
}
