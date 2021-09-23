#ifndef __TABLE_H__
#define __TABLE_H__

#include "Slot.h"

#define MAX_TBL 100

typedef struct _table
{
	Slot tbl[MAX_TBL];
	int (*func)(int);
} Table;

void TBLInit(Table * pt, int (*func)(int));

void TBLInsert(Table * pt, Key k, Value v);

Value TBLDelete(Table * pt, Key k);

Value TBLSearch(Table * pt, Key k);

#endif
