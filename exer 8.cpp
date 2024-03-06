//Prog. Proc. exer. 8

#include<stdio.h>

int main ()
{
	char nome [20];
	
	printf("Insira o nome do funcionario:");
	scanf("%s", nome);
	
	int htrabalho;
	
	printf("\nInsira a quantidade de horas trabalhadas:");
	scanf("%d", &htrabalho);
		
	int dependentes;
	
	printf("\nInsira o numero de dependentes:");
	scanf("%d", &dependentes);
	
	float bruto;
	
	bruto = (12 * htrabalho) + (dependentes * 40);
	
	printf("\nO/A funcionario/a %s tem %.2f de salario bruto.\n", nome, bruto);
	
	float inss;
	inss = 0.085 * bruto;
	
	float irs;
	irs = 0.05 * bruto;
	
	printf("\nDesconto INSS: %.2f\n", inss);
	printf("\nDesconto IRS: %.2f\n", irs);
	
	float liquido;
	liquido = bruto - irs - inss;
	
	printf("\nO seu salario liquido sera de %.2f\n", liquido);
	
	return 1;
}
