#include<stdio.h>

float fmedia(float s, int n); //float s && int n s�o par�metros

int main()
{
	int i; //Vari�vel Local
	float nota, media, soma = 0;
	
	for(i = 1; i <= 3; i++)
	{
		printf("\nNota = ");
		scanf("%f", &nota);
		soma = soma + nota;
	}
	
	media = fmedia(soma, i); //soma && i s�o argumentos
	printf("\nMedia = %f", media);
	
	return 1;
}

float fmedia(float s, int n)
{
	float m; //Vari�vel Local 
	m = s / n;
	
	return m;
}
