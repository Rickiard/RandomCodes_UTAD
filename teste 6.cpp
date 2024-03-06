#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome ;
	
	scanf("%s", &nome);
	printf("%[A-Za-z ]s", nome);
	
	return 1;
}
