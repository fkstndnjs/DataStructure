#include <stdio.h>
#include "ArrayList2.h"

int main(void)
{
	List list;
	int data;
	ListInit(&list);
	int total=0;
	
	LInsert(&list, 1);
	LInsert(&list, 2);
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsert(&list, 6);
	LInsert(&list, 7);
	LInsert(&list, 8);
	LInsert(&list, 9);

	if(LFirst(&list, &data))
	{
		total+=data;
		
		while(LNext(&list, &data))
			total+=data;
	}
	
	printf("total: %d\n", total);
	
	if(LFirst(&list, &data))
	{
		if(data%2==0 || data%3==0)
			LRemove(&list);
		
		while(LNext(&list, &data))
			if(data%2==0 || data%3==0)
				LRemove(&list);
	}
	
	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	
	return 0;
}
