#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
	int first=0; // 탐색 대상의 시작 인덱스 값
    int last=len-1; // 탐색 대상의 마지막 인덱스 값
	int mid;
	
	while(first<=last)
	{
		mid=(first+last)/2; // 탐색 대상의 중앙을 찾는다.
		
		if(arr[mid]==target) // 중앙에 저장된 값이 타겟이라면
			return mid; // 탐색 완료!
		else // 타겟이 아니라면
		{
			if(target<arr[mid])
				last=mid-1;
			else
				first=mid+1;
		}
	}
	
	return -1; // 찾지 못하면 -1 반환
}

int main(void)
{
	int arr[5]={1,3,5,7,9};
	int idx;
	
	idx=BSearch(arr, sizeof(arr)/sizeof(int), 9);
	
	if(idx==-1)
		puts("탐색 실패");
	else
		printf("타겟 인덱스: %d", idx);
	
	return 0;
}
