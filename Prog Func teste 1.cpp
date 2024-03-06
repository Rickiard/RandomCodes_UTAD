#include <stdio.h>

float raio(float r); //Funçãoo responsável por perguntar qual o raio do círculo para o utilizador
float per(float raio); //Função responsável por calcular o perimetro do círculo
float area(float raio); //Função responsável por calcular a área do círculo
int print(float per, float area, float r); //Função responsável por apresentar na tela os resultados obtidos

int main()
{
	//Float correspondente ao raio do círculo
	float r; 
	
	//Atribuição do valor de retorno da função raio(r) a r
	r = raio(r); 
	
	//Junção de todos os valores numa única função para aparecerem na tela
	print(per(r), area(r), r); 
	
	return 0;
}

float raio(float r)
{
	//Pedido do valor do raio
	printf("Insira o raio do circulo: "); 
	scanf("%f", &r);
	
	return r;
}

float per(float raio)
{
	float p;
	
	//Cálculo do perimetro
	p = 2 * 3.14 * raio; 
	
	return p;
}

float area(float raio)
{
	float a;
	
	//Cálculo da área
	a = 3.14 * raio * raio; 
	
	return a;
}

int print(float per, float area, float r)
{
	//Fazer aparecer na tela os valores calculados
	printf("\nRaio: %.2f\n\nPerimetro: %.2f\n\nArea: %.2f\n", r, per, area); 
	
	return 0;
}
