#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1 // '��'�� ǥ���ϱ� ���� ��ũ�� ���� 
#define FALSE 0 // '����'�� ǥ���ϱ� ���� ��ũ�� ����

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
