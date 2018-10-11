#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>

struct node * insert_front(struct node *list, int i){
	struct node *x;	
	//struct node new_node = malloc(32); //never tested this section
	//new_node = {i,list};
	struct node new_node = {i,list};
	x = malloc(64);
	//x->next = malloc(8);
	x->i = new_node.i;
	x->next = new_node.next;
	//x = list; 			//will not work
	//printf("%d\n",x->next->next);
	return x;
}
