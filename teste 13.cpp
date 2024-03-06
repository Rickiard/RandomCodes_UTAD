#include <stdio.h>
#include<stdlib.h>

int main()
{
	int matriz[2][2], det;
	
	for(int i = 0; i < 2; i++)
	{
		printf("\nLinha 1, Coluna %d: ", i + 1);
		scanf("%d", &matriz[0][i]);
	}
	
	for(int i = 0; i < 2; i++)
	{
		printf("\nLinha 2, Coluna %d: ", i + 1);
		scanf("%d", &matriz[1][i]);
	}
	
	det = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
	
	printf("%d", det);
	
	return 1;
}
