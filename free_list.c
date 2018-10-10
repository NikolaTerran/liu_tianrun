#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* free_list(struct node *list){
	if(list->next){
		free_list(list->next);
		free(list);
	}
	return list;
}
