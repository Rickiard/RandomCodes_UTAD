#include<stdio.h>
#include<math.h>

int main()
{
	float precofabrica;
	float precofinal;
	char automovel[20];

	printf("Insira o nome do automovel:");
	scanf("%s", automovel);

	printf("\nInsira o preco de fabrica do automovel:");
	scanf("%f", &precofabrica);

	precofinal = precofabrica + (0.45 * precofabrica) + (0.28 * precofabrica);

	printf("\nO preco do automovel %s sera de %.2f\n", automovel, precofinal);

	return 0;
}
