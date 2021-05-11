#include <stdio.h>

int BSearch(int * arr, int len, int target)
{
	int first=0;
	int last=len-1;
	int mid;
	
	while(first<=last)
	{
		mid=(first+last)/2;
		
		if(target==arr[mid])
		{
			return mid;
		}
		else
		{
			if(target<arr[mid])
				last=mid-1;
			else
				first=mid+1;
		}
	}
	
	return -1;
}

int main(void)
{
	int arr[]={1,3,5,7,9};
	int i;
	
	i=BSearch(arr, sizeof(arr)/sizeof(int), 7);
	
	if(i==-1)
		puts("Ž�� ����");
	else
		printf("ã�� ���� �ε���: %d", i);
	
	return 0;
}
