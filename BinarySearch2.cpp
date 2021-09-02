#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
	int first=0, last=len-1;
	int mid;
	int i;
	
	while(first<=last)
	{
		mid=(first+last)/2;
		
		if(arr[mid]==target)
			return mid;
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
	int arr[5]={1,3,5,7,9};
	int idx;
	
	idx=BSearch(arr, sizeof(arr)/sizeof(int), 9);
	
	if(idx==-1)
		puts("Å½»ö ½ÇÆĞ");
	else
		printf("Å¸°Ù ÀÎµ¦½º: %d", idx);
	
	return 0;
}
