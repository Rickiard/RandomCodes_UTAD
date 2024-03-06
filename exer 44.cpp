//Prog. Proc. exer. 44

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{	
	int mmc, num1, num2, n1m, n2m;
	
	printf("Introduza os dois numeros: ");
	scanf("%d, %d", &num1, &num2);
	
	for(int i = 1; i > 0; i++)
	{
		n1m = num1 * i;
		n2m = num2 * i;
		
		if(n1m == n2m)
		{
			mmc = i;
			break;
		}
	}
	
	printf("\nO minimo multiplo comum e %d\n", mmc);
	
	return 1;
}


