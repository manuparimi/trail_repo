#include<stdio.h>

int add(int a, int b) {
	return a+b;
}

int main()
{
	int a = 10;	
	int b = 20;
	int res = add(a, b);
	printf("%d + %d is %d\n", a, b, res);
}
