/*Reescreva o programa do exercício anterior lendo os dados dos alunos a partir do ficheiro
<alunos.txt> criando um ficheiro <aprovados.txt> com os alunos aprovados e um <reprovados.txt>
com os restantes. Os dados dos alunos devem estar um por linha no formato
numero;nome;nota;*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>

#define N 3

typedef struct _aluno
{
	int numero;
	char nome[10];
	float nota;
}aluno;	

void Ler_file(const char *filename);
void Passou_file(const char *filename);

aluno a[N][3];

int main()
{	
	const char *filename;
	
	Ler_file(filename);
	
	Passou_file(filename);
	
	return 0;
}

void Ler_file(const char *filename)
{
	filename = "alunos.txt";
	
	FILE *file;
	
	file = fopen(filename, "r");
	
	if(file == NULL)
	{
		printf("Falhou!");
		exit(0);
	}
	
	if(file != NULL)
	{
		for(int j = 0; j < N; j++)
		{
			fscanf(file, "%d %s %f", &a[j][0].numero, &a[j][1].nome, &a[j][2].nota);
			printf("%d %s %.2f\n", a[j][0].numero, a[j][1].nome, a[j][2].nota);
		}				
	}
	
	fclose(file);
}

void Passou_file(const char* filename)
{	
	remove("aprovados.txt");
	remove("reprovados.txt");
	
	for(int i = 0; i < N; i++)
	{	
		if(a[i][2].nota >= 9.5)
		{	
			FILE *file;
			
			file = fopen("aprovados.txt", "a");
			
			fprintf(file, "%d %s %.2f\n", a[i][0].numero, a[i][1].nome, a[i][2].nota);
			
			fclose(file);
		}
		else
		{	
			FILE *file;
			
			file = fopen("reprovados.txt", "a");
		
			fprintf(file, "%d %s %.2f\n", a[i][0].numero, a[i][1].nome, a[i][2].nota);	
			
			fclose(file);
		}
	}	
}
