#include<stdlib.h>
#include<stdio.h>
#include<math.h>

typedef struct _PONTO1
{
	float x, y;
}PONTO1;

typedef struct _PONTO2
{
	float x, y;
}PONTO2;

void dist(int, int, int, int);

PONTO1 b;
PONTO2 c;

int main()
{		
	b.x = 2;
	b.y = 2;
	
	c.x = 4;
	c.y = 8;
	
	dist(b.x, b.y, c.x, c.y);
	
	return 0;
}

void dist(int, int, int, int)
{
	float d;
	
	d = sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
	
	printf("A distancia e %.2f", d);
}
