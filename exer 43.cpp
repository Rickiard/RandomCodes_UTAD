//Prog. Proc. exer. 43

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{	
	int mdc = 1, num1, num2;
	
	printf("Introduza os dois numeros: ");
	scanf("%d, %d", &num1, &num2);
	
	for(int i = 2; i > 0; i++)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			if(mdc < i)
			{
				mdc = i;	
			}
			else
			{
				break;
			}
		}
	}
	
	printf("\nO maximo divisor comum e %d\n", mdc);
	
	return 1;
}


