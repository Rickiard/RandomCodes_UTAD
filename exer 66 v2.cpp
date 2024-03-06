#include <stdio.h>

// Declaração de variáveis
int linhas = 0; // Contador de linhas
char c; // Caracter temporário para leitura do arquivo

int main()
{
	// Abre o arquivo em modo de leitura
	FILE *arquivo = fopen("dados.txt", "r");
	
	// Verifica se o arquivo foi aberto com sucesso
	if (arquivo == NULL) {
	    printf("Erro ao abrir o arquivo.\n");
	    return 1; // Encerra o programa com código de erro
	}
	
	// Lê o arquivo caracter a caracter até o final
	while((c = fgetc(arquivo)) != EOF) {
	    // Se o caracter atual for uma quebra de linha, incrementa o contador de linhas
	    if (c == '\n') {
	        linhas++;
	    }
	}
	
	// Verifica se o último caracter do arquivo não é uma quebra de linha
	// Neste caso, ainda é uma linha, então o contador deve ser incrementado
	if (c != '\n') {
	    linhas++;
	}
	
	// Fecha o arquivo
	fclose(arquivo);
	
	// Imprime o resultado
	printf("O arquivo possui %d linhas.\n", linhas);
	
	return 0; // Encerra o programa com sucesso
}


