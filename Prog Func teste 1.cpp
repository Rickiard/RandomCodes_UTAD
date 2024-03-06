#include <stdio.h>

float raio(float r); //Fun��oo respons�vel por perguntar qual o raio do c�rculo para o utilizador
float per(float raio); //Fun��o respons�vel por calcular o perimetro do c�rculo
float area(float raio); //Fun��o respons�vel por calcular a �rea do c�rculo
int print(float per, float area, float r); //Fun��o respons�vel por apresentar na tela os resultados obtidos

int main()
{
	//Float correspondente ao raio do c�rculo
	float r; 
	
	//Atribui��o do valor de retorno da fun��o raio(r) a r
	r = raio(r); 
	
	//Jun��o de todos os valores numa �nica fun��o para aparecerem na tela
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
	
	//C�lculo do perimetro
	p = 2 * 3.14 * raio; 
	
	return p;
}

float area(float raio)
{
	float a;
	
	//C�lculo da �rea
	a = 3.14 * raio * raio; 
	
	return a;
}

int print(float per, float area, float r)
{
	//Fazer aparecer na tela os valores calculados
	printf("\nRaio: %.2f\n\nPerimetro: %.2f\n\nArea: %.2f\n", r, per, area); 
	
	return 0;
}
