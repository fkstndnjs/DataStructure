#include <stdio.h>

int BSearchRecur(int* arr, int first, int last, int target)
{
	int mid;
	
	if(first>last)
		return -1;
	
	mid=(first+last)/2;
	
	if(arr[mid]==target)
		return mid;
	else if(target<arr[mid])
		return BSearchRecur(arr, first, mid-1, target);
	else
		return BSearchRecur(arr, mid+1, last, target);
}

int main(void)
{
	int arr[]={1,3,5,7,9};
	
	int idx;
	
	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 5);
	
	if(idx==-1)
		puts("Å½»ö ½ÇÆĞ");
	else
		printf("Ã£´Â °ªÀÇ ÀÎµ¦½º: %d", idx);

	return 0;
}
