#include<stdio.h>
#include<stdlib.h>

int f(int x);

int main()
{
	int x;
	
	printf("x = ");
	scanf("%d", &x);
	
	f(x);
	
	printf("O valor de f(x) = %d", f(x));
	
	return 1;
}

int f(int x)
{
	return x + 1;
}
