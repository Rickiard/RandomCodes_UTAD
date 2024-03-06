#include<stdio.h>

float fmedia(float s, int n); //float s && int n são parâmetros

int main()
{
	int i; //Variável Local
	float nota, media, soma = 0;
	
	for(i = 1; i <= 3; i++)
	{
		printf("\nNota = ");
		scanf("%f", &nota);
		soma = soma + nota;
	}
	
	media = fmedia(soma, i); //soma && i são argumentos
	printf("\nMedia = %f", media);
	
	return 1;
}

float fmedia(float s, int n)
{
	float m; //Variável Local 
	m = s / n;
	
	return m;
}
