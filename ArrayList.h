#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100

typedef struct
{
	int arr[LIST_LEN];
	int numOfData;
	int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, int data);

int LFirst(List * plist, int * pdata);
int LNext(List * plist, int * pdata);

int LRemove(List * plist);
int LCount(List * plist);

#endif
