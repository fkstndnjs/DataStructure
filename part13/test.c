#include <stdio.h>
#include <stdlib.h>
#include "Table.h"

void TBLInit(Table * pt, int (*func)(int))
{
	int i;
	
	for(i=0; i<MAX_TBL; i++)
		(pt->tbl[i]).status = EMPTY;
		
	pt->func = func;
}

void TBLInsert(Table * pt, Key k, Value v)
{
	int hv = pt->func(k);
	pt->tbl[h
