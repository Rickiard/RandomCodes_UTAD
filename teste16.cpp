#include <stdio.h>
#include<stdlib.h>

#define N 3
#define M 20

void LerVetor(char [N][M]);
void MostrarVetor(char [N][M]);

int main()
{
    char v[N][M];

    LerVetor(v);
    MostrarVetor(v);

    return 0;
}

void LerVetor(char v[N][M])
{
    for (int i = 0; i < N; i++)
	{
        printf("\nInsira o nome %d: ", i + 1);
        gets(v[i]);
    }
}
void MostrarVetor(char v[N][M]){

    for(int i = 0; i < N; i++)
	{    
        printf("\nNome %d = %s\n", i + 1, v[i]);
    }
}
