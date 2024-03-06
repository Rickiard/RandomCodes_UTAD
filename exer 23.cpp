//Prog. Proc. exer. 22

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float dol, eur;
	char moeda;
	
	printf("Introduza a unidade para conversao:");
	scanf("%s", &moeda);
	
	switch(moeda)
	{
		case 'dolares':
			{
				printf("Introduza o valor:");
				scanf("%f", &dol);
		
				eur = 1.16 * dol;
		
				printf("O valor em euros e %.2f.", eur); 
			
				break;	
			}
		
		case 'euros':
			{
				printf("Introduza o valor:");
				scanf("%f", &eur);
		
				dol = 0,86 * eur;
		
				printf("O valor em dolares e %.2f.", dol);
				
				break;	
			}
			
		default: 
			{
				printf("Simbolo nao reconhecido");
				break;
			}
	}
	
	return 1;
}
