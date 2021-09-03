#include <stdio.h>

int Fibo(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return Fibo(n-1) + Fibo(n-2);
}

int main(void)
{
	int num=5;
	
	printf("피보나치 수열의 %d번째 값: %d", num, Fibo(num));
	
	return 0;
}
