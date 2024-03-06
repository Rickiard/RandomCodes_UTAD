#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Lado, Area;
	
	printf("Introduza o comprimento do lado: ");
	scanf("%d", &Lado);
	
	Area = Lado * Lado;
	printf("\nA area do quadrado com %d de comprimento do lado e %d.\n", Lado, Area);
	
	return 1; 
}
