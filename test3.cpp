#include <stdio.h>

typedef struct
{
	int (*fptr)(int a);
} Test;

int Func(int num)
{
	return num;
}

void Init(Test * ph, int (*fptr)(int a))
{
	ph->fptr = fptr;
}

int main(void)
{
	int a=10;
	
	Test b;
	
	Init(&b, Func);
	
	printf("%d", b.fptr(a));
	
	return 0;
}
