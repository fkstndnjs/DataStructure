#include <stdio.h>
#include <string.h>

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
	int arr[9]={3,6,5,8,2,4,1,9,7};
	int idx;
	
	idx=LSearch(arr, sizeof(arr)/sizeof(int), 9);
	if(idx==-1)
		puts("Å½»ö ½ÇÆÐ");
	else
		printf("Å¸°Ù ÀÎµ¦½º: %d", idx);
		
	return 0;
}
