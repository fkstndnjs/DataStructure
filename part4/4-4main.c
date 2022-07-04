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
	}  // d1이 정렬 순서상 앞선다.
	else
		return 1;    // d2가 정렬 순서상 앞서거나 같다.
}

int main(void)
{
	// List의 생성 및 초기화  ////////////
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
	
	// 저장된 데이터의 전체 출력 ////////////
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos)) 
			ShowPointPos(ppos);
	}
	printf("\n\n");

	/*// 숫자 22을 검색하여 모두 삭제 ////////////
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

	// 삭제 후 저장된 데이터 전체 출력 ////////////
	printf("현재 데이터의 수: %d \n", LCount(&list));

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
