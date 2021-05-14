#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next;
} Node;

int main(void)
{
	Node * head = NULL;
	Node * tail = NULL;
	Node * cur = NULL;
	
	Node * newNode = NULL;
	int readData;
	
	while(1)
	{
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		
		if(readData<1)
			break;
			
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;
		
		if(head==NULL)
			head = newNode;
		else
			tail->next = newNode;
		
		tail = newNode;
	}
	
	printf("\n");
