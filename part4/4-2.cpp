#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next;
} Node;

int main(void)
{
	Node * head = NULL;    // NULL ������ �ʱ�ȭ
	Node * tail = NULL;
	Node * cur = NULL;
	Node Dum={0, NULL};
	Node * newNode;
	int readData;
	head = &Dum;
	
	/**** �����͸� �Է� �޴� ���� ****/
	while(1)
	{
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		if(readData < 1)
			break;

		/*** ����� �߰����� ***/
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if(head->next == NULL)
			head->next = newNode;
		else
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	/**** �Է� ���� �������� ��°��� ****/
	printf("�Է� ���� �������� ��ü���! \n");
	if(head->next == NULL) 
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else 
	{
		cur = head->next; 
		printf("%d  ", cur->data);   // ù ��° ������ ���
		
		while(cur->next != NULL)    // �� ��° ������ ������ ���
		{
			cur = cur->next;
			printf("%d  ", cur->data);
		}
	}
	printf("\n\n");

	/**** �޸��� �������� ****/
	if(head->next == NULL) 
	{
		return 0;    // ������ ��尡 �������� �ʴ´�.
	}
	else 
	{
		Node * delNode = head->next;
		Node * delNextNode = head->next->next;

		printf("%d��(��) �����մϴ�. \n", head->next->data);
		free(delNode);    // ù ��° ����� ����
		
		while(delNextNode != NULL)    // �� ��° ������ ��� ���� ���� �ݺ���
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);    // �� ��° ������ ��� ����
		}
	}

	return 0;
}
