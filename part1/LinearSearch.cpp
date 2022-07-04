#include <stdio.h>

int LSearch(int arr[], int len, int target)
{
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i]==target)
			return i;
	}
	return -1;
}

int main(void)
{
	int arr[]={3,5,2,4,9};
	
	int i;
	
	i = LSearch(arr, sizeof(arr)/sizeof(int), 4);
	
	if(i==-1)
		puts("탐색 실패");
	else
		printf("찾는 값이 저장되어 있는 인덱스: %d", i);
	
	return 0;
}
