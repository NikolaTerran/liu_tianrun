#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>

struct node * insert_front(struct node *list, int i){
	struct node *x;	
	struct node new_node = {i,list};
	x = (struct node*)malloc(50);
	*x = new_node;
	//printf("%d\n",x->next->next);
	return x;
}
