#ifndef __SIMPLE_HEAP_H__
#define __SIMPLE_HEAP_H__

#define TRUE	1
#define FALSE	0

#define HEAP_LEN	100

typedef char HData;

typedef struct _heap
{
	int (*comp)(HData h1, HData h2);
	int numOfData;
	HData heapArr[HEAP_LEN];
} Heap;

/*** Heap 관련 연산들 ****/
void HeapInit(Heap * ph, int (*comp)(HData h1, HData h2));
int HIsEmpty(Heap * ph);

void HInsert(Heap * ph, HData data);
HData HDelete(Heap * ph);

#endif
