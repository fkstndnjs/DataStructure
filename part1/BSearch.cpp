#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
	int first=0; // Ž�� ����� ���� �ε��� ��
    int last=len-1; // Ž�� ����� ������ �ε��� ��
	int mid;
	
	while(first<=last)
	{
		mid=(first+last)/2; // Ž�� ����� �߾��� ã�´�.
		
		if(arr[mid]==target) // �߾ӿ� ����� ���� Ÿ���̶��
			return mid; // Ž�� �Ϸ�!
		else // Ÿ���� �ƴ϶��
		{
			if(target<arr[mid])
				last=mid-1;
			else
				first=mid+1;
		}
	}
	
	return -1; // ã�� ���ϸ� -1 ��ȯ
}

int main(void)
{
	int arr[5]={1,3,5,7,9};
	int idx;
	
	idx=BSearch(arr, sizeof(arr)/sizeof(int), 9);
	
	if(idx==-1)
		puts("Ž�� ����");
	else
		printf("Ÿ�� �ε���: %d", idx);
	
	return 0;
}
