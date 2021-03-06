#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1 // '참'을 표현하기 위한 매크로 정의 
#define FALSE 0 // '거짓'을 표현하기 위한 매크로 정의

#define LIST_LEN 100
typedef int LData;

typedef struct
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif
