#include<stdlib.h>
#include<stdio.h>

void LerString(char*, int);
void InverterString(char*, int);

#define N 20

int main()
{
	int size = N;

	char v[N];

	LerString(v, N);

	InverterString(v, N);

	return 1;
}

void LerString(char* v, int size)
{
	printf("Insira uma string: ");
	scanf("%s", &v[N]);
}

void InverterString(char* v, int size)
{
	int i;

	for (i = size - 1; i > 0; i--)
	{
		int u = 0, aux; 
		
		v[u] = v[i];
		aux = v[u];
		v[i] = aux;
		u++;	
	}
	
	printf("\nInverso: %s\n", v);
}
