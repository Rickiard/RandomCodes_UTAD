#include<stdlib.h>
#include<stdio.h>

#define N 1

void insdados();
void lerdados();

typedef struct ALE
{
	char nome[20];
	char categoria[20];
	float salario;
}ale;

ale p[N];

int main()
{
	insdados();
	lerdados();

	return 1;
}

void insdados() //Pedi ao utilizador os dados dos funcionários
{
	for(int i = 0; i < N; i++)
	{
		printf("Introduza os dados do funcionario %d (nome, categoria, salario): ", i + 1);
		fflush(stdin);
		scanf("%s, %s, %f", &p[i].nome, &p[i].categoria, &p[i].salario);
		printf("\n");
	}
}

void lerdados()
{
	char resposta = ' ';
	
	printf("Pretende acessar aos dados(S/N)? ");
	fflush(stdin);
	scanf("%c", &resposta);
	
	if(resposta == 'S')
	{
		for(int i = 0; i < N; i++)
		{
			printf("%s, %s, %.2f", p[i].nome, p[i].categoria, p[i].salario);
		}
	}	
}
	
	
	
	
	
	
	
	
