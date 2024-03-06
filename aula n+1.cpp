#include <stdio.h>
#include <conio.h>
#define IVA 23
double lucro;
double pvp(double);
double pcIVA(double);
main()
{
	double quantia;
	// Ler lucro associado a cada produto
	printf("Percentagem de lucro (%%): ");
	scanf("%lf",&lucro);
	
	//Ler custo dos artigos e escrever o seu p.v.p. até ler custo nulo
	do
	{
		printf("Custo do artigo: ");
		scanf("%lf",&quantia);
		if (quantia > 0)
			printf("P.V.P. = %lf",pvp(quantia));
	}	while (quantia==0);

	getche();
	
	return(0);
}

double pvp(double custo)
{
	double quantia;
	// Calcular o preço acrescido do lucro
	quantia = custo*(100+lucro)/100;
	// Calcular o P.V.P.
	return (pcIVA(quantia));
}
double pcIVA(double preco)
{
	double imposto;
	// Calcular o valor do IVA
	imposto = preco*IVA/100;
	// Calcular o P.V.P.
	return (preco+imposto);
}
