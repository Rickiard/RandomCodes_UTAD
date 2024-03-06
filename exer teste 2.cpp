#include<stdio.h>

#define N 5

typedef struct pessoa
{
	char nome[50];
	int idade;
}Pessoa;

typedef struct aluno
{
	Pessoa bio;
	long num;
	float nota;
}Aluno;

void ler(Aluno *al);

int main()
{
	Aluno a[N];
	int i;
	
	ler(a);
	
	for(i = 0; i < N; i++)
	{
		printf("\nNome do %d.o aluno = %s", i + 1, a[i].bio.nome);
	}
	
	return 1;
}

void ler(Aluno *al)
{
	int i; 
	
	for(i = 0; i < N; i++)
	{
		fflush(stdin);
		printf("\nNome do %d.o aluno: ", i + 1);
		gets(al[i].bio.nome);
		printf("\nIdade Num Nota:\n");
		scanf("%d %l %f", &al[i].bio.idade, &al[i].num, &al[i].nota);
	}
}
