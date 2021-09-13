#include "SimpleHeap.h"

void HeapInit(Heap * ph) // ���� �ʱ�ȭ
{
	ph->numOfData = 0;
}

int HIsEmpty(Heap * ph) // ���� ������� Ȯ��
{
	if(ph->numOfData ==0) // �ڽ� ��尡 ���ٸ� TRUE 
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
	if(GetLChildIDX(idx) > ph->numOfData) // �ڽ� ��尡 �������� �ʴ´ٸ�
		return 0; //
	else if(GetLChildIDX(idx) == ph->numOfData) // �ڽ� ��尡 ���� �ڽ� ��� �ϳ��� �����Ѵٸ� 7
		return GetLChildIDX(idx);
	else
	{
		if(ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRchildIDX(idx)].pr) // ������ �ڽ� ����� �켱������ ���ٸ�
			return GetRChildIDX(idx);
		else // ���� �ڽ� ����� �켱������ ���ٸ�
			return GetLChildIDX(idx);
	}
}

// ���� ������ ����
void HInsert(Heap * ph, HData data, Priority pr)
{
	int idx = ph->numOfData+1; // �� ��尡 ����� �ε��� ���� idx�� ���� 
	HeapElem nelem = {pr, data}; // �� ����� ���� �� �ʱ�ȭ 
	
	// �� ��尡 ����� ��ġ�� ��Ʈ ����� ��ġ�� �ƴ϶�� while�� �ݺ� 
	while(idx != 1)
	{
		// �� ���� ���� ����� �켱���� �� 
		if(pr < (ph->heapArr[GetParentIDX(idx)].pr)) // �� ����� �켱������ ���ٸ� 
		{
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)]; // �θ� ��带 �� ���� ����, ������ ���� 
			idx = GetParentIDX(idx); // �� ��带 �� ���� �ø�, ������ �ø����� �ʰ� �ε��� ���� ���� 
		}
		else // �� ����� �켱������ ���� �ʴٸ� 
			break;
	}
	
	ph->heapArr[idx] = nelem; // �� ��带 �迭�� ���� 
	ph->numOfData += 1;
}

// ������ ������ ����
HData HDelete(Heap * ph)
{
	HData retData = (ph->heapArr[1]).data; // ��ȯ�� ���ؼ� ������ ������ ���� 
	HeapElem lastElem = ph->heapArr[ph->numOfData]; // ���� ������ ��� ���� 
	
	// �Ʒ��� ���� parentIdx���� ������ ��尡 ����� ��ġ������ ����
	int parentIdx=1; // ��Ʈ ��尡 ��ġ�ؾ� �� �ε��� �� ���� 
	int childIdx;
	
	
	// ��Ʈ ����� �켱������ ���� �ڽ� ��带 �������� �ݺ��� ���� 
	while(childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if(lastElem.pr <= ph->heapArr[childIdx].pr)  // ������ ���� �켱���� �� 
			break; // ������ ����� �켱������ ������ �ݺ��� Ż��! 
		
		// ������ ��庸�� childIdx�� �켱������ �� ������, �񱳴�� ����� ��ġ�� �� ���� �ø� 
		ph->heapArr[parentIdx] = ph->heapArr[childIdx]; 
		parentIdx = childIdx; // ������ ��尡 ����� ��ġ������ �� ���� ���� 
	} // �ݺ��� Ż���ϸ� parentIdx���� ������ ����� ��ġ������ ����� 
	
	ph->heapArr[parentIdx] = lastElem; // ������ ��� ���� ���� 
	ph->numOfData -= 1;
	return retData;
}
