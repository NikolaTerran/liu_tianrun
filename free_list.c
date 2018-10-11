#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//void custom_free(struct node *p){
	//if(!p){
	//}
	//else{
//		p->next = NULL;
//		p->i = NULL;
//		printf("****node freed****\n");
	//}
	//p = NULL;
//}

struct node* free_list(struct node *list){
	if(list->next){
		free_list(list->next);
		//printf("wut");
		//cus_free(list->next); //This will cause double free or corruption error
		//free(list->next);     //same for this
		free(list);
		//custom_free(list);
	}
	else{	//else is included because the stack value is still on the stack
		//free(list->next);
		free(list);
		//custom_free(list);
	}
	list->next = NULL;
	list->i = NULL;
	list = NULL;
	printf("****node freed****\n");
	return list;
}
