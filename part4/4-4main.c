#include <stdio.h>
#include "DLinkedList2.h"
#include "Point.h"

int WhoIsPrecede(Point * d1, Point * d2)
{
	if(d1->xpos < d2->xpos)
		return 0;
	else if(d1->xpos==d2->xpos)
	{
		if(d1->ypos < d2->ypos)
			return 0;
		else
			return 1;
	}  // d1�� ���� ������ �ռ���.
	else
		return 1;    // d2�� ���� ������ �ռ��ų� ����.
}

int main(void)
{
	// List�� ���� �� �ʱ�ȭ  ////////////
	List list;
	ListInit(&list);
	Point * ppos;
	SetSortRule(&list, WhoIsPrecede);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 1);
	LInsert(&list, ppos);	
	
	// ����� �������� ��ü ��� ////////////
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos)) 
			ShowPointPos(ppos);
	}
	printf("\n\n");

	/*// ���� 22�� �˻��Ͽ� ��� ���� ////////////
	if(LFirst(&list, &data))
	{
		if(data == 22)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}

	// ���� �� ����� ������ ��ü ��� ////////////
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	*/
	return 0;
}
