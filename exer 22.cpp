//Prog. Proc. exer. 22

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float KM, MILHAS;
	
	printf("Introduza o valor de km:");
	scanf("%f", &KM);
	
	MILHAS = KM / 1.609;
	
	if(KM > 5000)
	{
		printf("\nO numero em milhas e de %.2f.\n\nMuito Longe!\n", MILHAS);
	}
	else
	{
		printf("\nO numero em milhas e de %.2f.\n", MILHAS);
	}
		
	return 1;
}
