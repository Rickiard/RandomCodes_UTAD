 //Prog. Proc. exer. 11

#include<stdio.h>

int main ()
{
	int horas;
	int minutos;
	int am;
	
	printf("Insira as horas e minutos-");
	scanf("%d:%d", &horas, &minutos);
	
	if(horas >= 13)
	{
		if(minutos == 0)
		{
			am = horas - 12;
			printf("\nAs horas sao 0%d:0%d PM\n", am, minutos);
		}
		else
		{
			am = horas - 12;
			printf("\nAs horas sao 0%d:%d PM\n", am, minutos);
		}
	}
	else if(minutos == 0)
	{
		if(horas < 10)
		{
			printf("\nAs horas sao 0%d:0%d AM\n", horas, minutos);
		}
		else if (horas >= 10 && horas < 12)
		{
			printf("\nAs horas sao %d:0%d AM\n", horas, minutos);	
		}
		else
		{
			printf("\nAs horas sao %d:0%d PM\n", horas, minutos);
		}
	}
	else if(horas >= 0 && horas < 12)
	{
		if(horas == 0)
		{
			printf("\nAs horas sao 0%d:%d AM\n", horas, minutos);
		}
		else
		{
			printf("\nAs horas sao %d:%d AM\n", horas, minutos);
		}
	}
	else
	{
		printf("\nAs horas sao %d:%d PM\n", horas, minutos);
	}
	
	return 1;
}
