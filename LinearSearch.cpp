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
		puts("Ž�� ����");
	else
		printf("ã�� ���� ����Ǿ� �ִ� �ε���: %d", i);
	
	return 0;
}
