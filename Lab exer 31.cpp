#include<stdlib.h>
#include<stdio.h>

#define MAX 20

typedef struct _ALUNO
{
	char nome[MAX];
	int n_mec;
	float nota;
}ALUNO;	

ALUNO * lerAlunos(const char *filename, int *size);
void imprimirAprovadosEReprovados(ALUNO *v, int size);
void libertarAlunos(ALUNO *v);

int main()
{	
	ALUNO *alunos = NULL;
	int size = 0;
	
	alunos = lerAlunos("alunos.txt", &size);
	if(alunos != NULL)
	{
		imprimirAprovadosEReprovados(alunos, size);
	}
	libertarAlunos(alunos);
}

ALUNO * lerAlunos(const char *filename, int *size)
{
	ALUNO * v = NULL;
	FILE* fp;
	int i = 0;
	if((fp = fopen(filename, "r")) == NULL)
	{
		printf("\a\nErro de leitura do ficheiro...\n");
		return v;
	}
	
	while(!feof(fp))
	{
		if((v = (ALUNO*)realloc(v, sizeof(ALUNO) * (i + 1))) == NULL)
		{
			printf("\a\nErro na alocacao da memoria...\n");
			return v;
		}
		
		fscanf(fp, "%[^;];%d;%f\n", v[i].nome, &v[i].n_mec, &v[i].nota);
		i++;
	}
	fclose(fp);
	*size = i;
	
	printf("Ficheiro de alunos lido com sucesso\n");
	return v;
}

void libertarAlunos(ALUNO * v)
{
	free(v);
}

void imprimirAprovadosEReprovados(ALUNO * v, int size)
{
	FILE *fpa, *fpr;
	int i;
	if(((fpa = fopen("aprovados.txt", "w")) != NULL) && ((fpr = fopen("reprovados.txt", "w")) != NULL))
	{
		for(i = 0; i < size; i++)
		{
			if(v[i].nota >= 9.5)
			{
				fprintf(fpa, "%s;%d;%.2f\n", v[i].nome, v[i].n_mec, v[i].nota);
			}
			else
			{
				fprintf(fpr, "%s;%d;%.2f\n", v[i].nome, v[i].n_mec, v[i].nota);
			}
		}
		fclose(fpa);
		fclose(fpr);
		printf("Ficheiros criados com sucesso\n");
	}
	else
	{
		if(fpa != NULL)
		{
			fclose(fpa);
		}
		printf("ERRO na criacao dos ficheiros\n");
	}
}
