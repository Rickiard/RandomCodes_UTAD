//Prog. Proc. exer. 46

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int rep(int n);
int n;
int i;

/*Implemente um programa que permita inserir uma sequ�ncia de 100
elementos do tipo inteiro com valores entre 0 e 20. Utilize uma fun��o que
permita ao utilizador inserir um valor inteiro apenas pode ter valor entre 0 e
20. Se tal n�o acontecer deve insistir na leitura.*/

int main()
{	
	for(i = 1; i <= 100; i++)
	{
		rep(n);
	}
	
	return 1;
}

int rep(int n)
{
	do
	{
		printf("Introduza o %d� valor: ", i);
		scanf("%d", &n);
	} 
	while(n > 20 || n < 0);
	
	return n;	
}
