#include<stdio.h>
#include<stdlib.h>

int f(int x);

int main()
{
	int x;
	
	printf("Introduza o valor de x: ");
	scanf("%d", &x);
	
	printf("O valor f(%d) e %d", x, f(x));
	
	f(x);
	
	return 1;
}

int f(int x)
{
	return x + 2;
}
