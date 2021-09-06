#include <stdio.h>
#include <stdlib.h>
#include "6-1.h"

void StackInit(Stack * pstack)
{
	pstack->tail=NULL;
}

int SIsEmpty(Stack * pstack)
{
	if(pstack->tail=NULL)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack * pstack, Data data)
{
	Node * newNode = (Node *)malloc(sizeof(Node));
	
	if(pstack->tail == NULL) 
	{
		pstack->tail = newNode;
		newNode->next = newNode;
	}
	else 
	{
		newNode->next = pstack->tail->next;
		pstack->tail->next = newNode;
		pstack->tail = newNode;
	}
}

Data SPop(Stack * pstack)
{
	Data rdata;
	Node * rnode;
	
	if(SIsEmpty(pstack)){
		printf("Stack Memory Error!");
		exit(-1);
	}
	
	rdata = pstack->tail->data;
	rnode = pstack->tail;
	
	pstack->tail=pstack->tail->next;
	free(rnode);
	
	return rdata;
}

Data SPeek(Stack * pstack)
{
	if(SIsEmpty(pstack))
	{
		printf("Stack Memory Error!");
		exit(-1);
	}
	
	return pstack->tail->data;
}
