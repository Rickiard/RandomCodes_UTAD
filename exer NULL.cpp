#include <stdio.h>
#include <stdlib.h>

void zerar(int *matriz[5][4]);

int main()
{
	int *matriz[5][4];
	
	zerar(matriz);
	
	return 1;
}

void zerar(int *matriz[5][4])
{	
	for(int i = 0; i < 5; i++)
	{
		for(int o = 0; o < 4; o++)
		{
			matriz[i][o] = 0;
			printf("%d\n", matriz[i][o]);
		}	
	}
}


