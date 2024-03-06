#include<stdio.h>
#include<stdlib.h>

int main()
{
	int altura, base, area;
	
	printf("Introduza a altura do retangulo: ");
	scanf("%d", &altura);
	
	printf("Introduza o comprimento da base do retangulo: ");
	scanf("%d", &base);
	
	area = base * altura;
	printf("\nA area do retangulo e %d.\n", area);
	
	return 1; 
}
