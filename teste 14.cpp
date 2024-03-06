#include <stdio.h>
#define N 5

float creditos(float movimentos[N]);
float debitos(float movimentos[N]);
float media(float movimentos[N]);
float saldo(float movimentos[N]);

int main()
{
	int i, op;
	float movimentos[N];
	
	printf("Insira os %d movimentos, separados por espaco: ", N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%f", &movimentos[i]);
	}

	do
	{	
		printf("\nEscolha uma opcao");
		printf("\n1 - Creditos\n2 - Debitos\n3 - Media\n4 - Saldo\n\n");
		scanf("%d", &op);
		
		while(op < 1 || op > 4)
		{
			printf("\nTem de ser um numero entre 1 e 4: ");
			scanf("%d", &op);
		}		
	}while(op < 1 || op > 4);
	
	
	
	switch(op)
	{
		case 1:
		{
			printf("\nO total de creditos e: ");
			printf("%.2f", creditos(movimentos));
			break;
		}
		
		case 2: 
		{
			float d;
			
			d = debitos(movimentos);
			
			printf("\nO total de debitos e: %.2f", d);
			break;			
		}
		
		case 3: printf("\nA media dos movimentos e: %.2f", media(movimentos));
				break;
				
		case 4: printf("\nO saldo do periodo e: %.2f", saldo(movimentos));
				break;
		}	
		
	return 1;
}

float creditos(float movimentos[N])
{
	int i;
	float cred = 0.0;
	
	for(i = 0; i < N; i++)
	{
		if(movimentos[i])
			cred = cred + movimentos[i];
	}
	
	return cred;
}

float debitos(float movimentos[N])
{
	int i;
	float deb = 0.0;
	for(i = 0; i < N; i++)
		if(movimentos[i] < 0)
			deb+=movimentos[i];
			
	return deb;		
}

float saldo(float movimentos[N])
{
	return(creditos(movimentos) + debitos(movimentos));
}

float media(float movimentos[N])
{
	return(saldo(movimentos) / N);
}

