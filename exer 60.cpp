//exer 60

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{	
	char nome[20], apelido[20], *completo;
	
	printf("Primeiro nome: ");
	gets(nome);
	
	printf("\nApelido: ");
	gets(apelido);
	
	completo = strcat(strcat(nome, " "), apelido); //completo = strcat(nome, " "); completo = strcat(completo, apelido);
	
	printf("\nNome Completo: %s\n", completo);
		
	return 1;
}
