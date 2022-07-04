#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

NameCard * MakeNameCard(char * name2, char * phone2)
{
	NameCard * ptr = (NameCard *)malloc(sizeof(NameCard));
	strcpy(ptr->name, name2);
	strcpy(ptr->phone, phone2);
	
	return ptr;
}

void ShowNameCardInfo(NameCard * pcard)
{
	printf("name: %s, phone: %s\n", pcard->name, pcard->phone);
}

int NameCompare(NameCard * pcard, char * name2)
{
	if(!strcmp(pcard->name, name2))
		return 1;
	else
		return 0;
}

void ChangePhoneNum(NameCard * pcard, char * phone2)
{
	strcpy(pcard->phone, phone2);
}
