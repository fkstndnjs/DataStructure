#include <stdio.h>

int BSearch(int arr[], int first, int last, int target)
{
	int mid;
	
	if(first>last)
		return -1;
	else
	{
		mid=(first+last)/2;
		
		if(arr[mid]==target)
			return mid;
		else if(target<arr[mid])
			BSearch(arr, first, mid-1, target);
		else
			BSearch(arr, mid+1, last, target);
	}
}

int main(void)
{
	int arr[5]={1,2,3,4,5};
	int idx;
	
	idx=BSearch(arr, 0, sizeof(arr)/sizeof(int)-1, 5);
	
	if(idx==-1)
		puts("½ÇÆĞ");
	else
		printf("%d", idx);
		
	return 0;
}
