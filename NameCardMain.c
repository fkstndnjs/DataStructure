#include <stdio.h>
#include "ArrayList3.h"

int main(void)
{
	List list;
	NameCard tmp;
	NameCard * pcard;
	int i=0;
	
	while(i<3)
	{
		char name[30];
		char phone[30];
		
		scanf("%s %s", name, phone);
		
		pcard = MakeNameCard(name, phone);
		LInsert(&list, pcard);
		i++;
	}

	if(LFirst(&list, &pcard))
	{
		ShowNameCardInfo(pcard);
		
		while(LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}
	
	printf("\n\n");
	
	if(LFirst(&list, &pcard))
	{
		if(NameCompare(pcard->name, "seok"))
			ShowNameCardInfo(pcard);
		
		while(LNext(&list, &pcard))
			if(NameCompare(pcard->name, "seok"))
				ShowNameCardInfo(pcard);
	}
	
	if(LFirst(&list, &pcard))
	{
		if(NameCompare(pcard->name, "hyun"))
			ChangePhoneNum(pcard, "9999");
		
		while(LNext(&list, &pcard))
			if(NameCompare(pcard->name, "hyun"))
				ChangePhoneNum(pcard, "9999");
	}
	
	if(LFirst(&list, &pcard))
	{
		if(NameCompare(pcard->name, "yu"))
		{
			pcard=LRemove(&list);
			free(pcard);
		}
		
		while(LNext(&list, &pcard))
		{
			if(NameCompare(pcard->name, "yu"))
			{
				pcard=LRemove(&list);
				free(pcard);
			}
		}
	}
	
	printf("\n\n");
	
	if(LFirst(&list, &pcard))
	{
		ShowNameCardInfo(pcard);
		
		while(LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}
	
	return 0;
}
