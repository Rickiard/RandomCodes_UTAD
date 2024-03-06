//Prog. Proc. exer. 18

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int num1 = rand();
	
	if(num1 % 3 == 0)
	{
		printf("%d e divisivel por 3\n", num1);
	}
	else
	{
		printf("%d nao e divisivel por 3\n", num1);
	}
	
	return 1;
}
