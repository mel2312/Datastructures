#ifndef NODE_H
#define NODE_H

typedef struct node{
	void* data;
	struct node *prev;
	struct node *next;
} NODE;

#endif
