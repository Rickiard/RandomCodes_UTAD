//Prog. Proc. exer. 41

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{	
	unsigned int num;
	int max = 0;
	
	for(int i = 0; i <= 0; i = i)
	{
		printf("\nIntroduza um valor: ");
		scanf("%d", &num);
		
		if(num == -1)
		{
			break;
		}
		if (max < num)
		{
			max = num;
		}
	}
	
	printf("\nO valor maximo foi %d\n", max);
	
	return 1;
}


