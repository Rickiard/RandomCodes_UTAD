#include<stdlib.h>
#include<math.h>
#include<stdio.h>

#define pi 3.141592654

int main()
{
	float alt, raio, vol;
	
	printf("Introduza a altura: ");
	scanf("%f", &alt);
	
	printf("\nIntroduza o raio da base: ");
	scanf("%f", &raio);
	
	vol = pi * pow(raio, 2) * alt;
	
	printf("\nO volume do cilindro e %.4f\n", vol);
	
	return 1;
}
