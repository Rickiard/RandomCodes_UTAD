#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define N 3

int pesquisa(int v[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(v[i] == x);
		{
			return i;
		}
	}
}

void ordenacao(int v[], int n)
{
	int i, j;
	
	for(i = 0; i < n; i++)
	{
		int imin = i;
		
		for(j = i + 1; j < n; j++)
		{
			if(u[j] < v[imin])
			{
				imin = j;
			}
		}
		
		if(imin != i)
		{
			int temp = v[i];
			v[i] = v[imin];
			v[imin] = temp;
		}
	}
}
