#include "SimpleHeap.h"

void HeapInit(Heap * ph) // 힙의 초기화
{
	ph->numOfData = 0;
}

int HIsEmpty(Heap * ph) // 힙이 비었는지 확인
{
	if(ph->numOfData ==0)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx) // 부모 노드의 인덱스 값 반환
{
	return idx/2;
}

int GetLChildIDX(int idx) // 왼쪽 자식 노드의 인덱스 값 반환
{
	return idx*2;
}

int GetRChildIDX(int idx) // 오른쪽 자식 노드의 인덱스 값 반환
{
	return GetLChildIDX(idx)+1;
}

// 두 개의 자식 노드 중 높은 우선순위의 자식 노드 인덱스 값 반환
int GetHiPriChildIDX(Heap * ph, int idx)
{
	if(GetLChildIDX(idx) > ph->numOfData)
		return 0;
	else if(GetLChildIDX(idx) == ph->numOfData)
		return GetLChildIDX(idx);
	else
	{
		if(ph->heapArr[GetLChildIDX(idx).pr > ph->heapArr[GetRchildIDX(idx)].pr)
			return GetRChildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
}
