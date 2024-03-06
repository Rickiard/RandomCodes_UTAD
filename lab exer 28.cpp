#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define N 3

typedef struct _aluno
{
	int numero;
	char nome;
	float nota;
}aluno;	

void Passou();

aluno a[N];

int main()
{	
	for(int i = 0; i < N; i++)
	{	
		printf("\nInsira o numero mecanografico do aluno %d: ", i + 1);
		scanf("%d", &a[i].numero);
		
		printf("\nInsira o seu respetivo nome: ");
		scanf("%s", &a[i].nome);
		
		printf("\nInsira a sua respetiva nota: ");
		scanf("%f", &a[i].nota);
	}
	
	Passou();
	
	return 0;
}

void Passou()
{
	for(int i = 0; i < N; i++)
	{	
		if(a[i].nota >= 9.5)
		{
			printf("Parabens %s\n\n", a[i].nome);
		}
	}
}
