#include "SimpleHeap.h"

void HeapInit(Heap * ph) // ���� �ʱ�ȭ
{
	ph->numOfData = 0;
}

int HIsEmpty(Heap * ph) // ���� ������� Ȯ��
{
	if(ph->numOfData ==0)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx) // �θ� ����� �ε��� �� ��ȯ
{
	return idx/2;
}

int GetLChildIDX(int idx) // ���� �ڽ� ����� �ε��� �� ��ȯ
{
	return idx*2;
}

int GetRChildIDX(int idx) // ������ �ڽ� ����� �ε��� �� ��ȯ
{
	return GetLChildIDX(idx)+1;
}

// �� ���� �ڽ� ��� �� ���� �켱������ �ڽ� ��� �ε��� �� ��ȯ
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
