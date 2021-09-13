#include <stdio.h>

int Func2(int a)
{
	return a;
}

typedef int (*Func)(int a);

int main(void)
{
	int num;
	Func fptr;
	
	scanf("%d", &num);
	
	fptr=Func2;
	
	printf("%d", fptr(num));
	
	return 0;
}
