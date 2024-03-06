//Prog. Proc. exer. 13

#include<stdio.h>

int main ()
{
	int a, b;
	char op;
	
	printf("Introduza a operacao:");
	scanf("%d %c %d", &a, &op, &b);
	
	switch(op)
	{
		case '/': 
		{
				int divisao;
			divisao = a / b;
			if (b > 0)
			{
				printf("\n%d\n", divisao);	
			}
			else
			{
				printf("\nErro\n");	
			}
			break;
		}
		
		case '-':
		{
			int subtracao;
			subtracao = a - b;
			printf("\n%d\n", subtracao);	
			break;
		}
			
		
		case '*':
		{
			int mult;
			mult = a * b;
			printf("\n%d\n", mult);
			break;
		}
			
		
		case '+':
		{
			int soma;
			soma = a + b;
			printf("\n%d\n", soma);
			break;	
		}
			
		default: 
		{
			printf("\nErro!\n");
		}
	}
	
	return 1;
}
