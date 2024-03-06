#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int f(int x);

int main()
{
	int x;
	
	printf("Introduza o valor de x: ");
	scanf("%d", &x);
	
	int x = 2 * x;
	
	return 1;
}

int f(int x)
{
	printf("O valor da funcao e %d", f);
	
	return x;
}
