#include <stdio.h>

// Declara��o de vari�veis
int linhas = 0; // Contador de linhas
char c; // Caracter tempor�rio para leitura do arquivo

int main()
{
	// Abre o arquivo em modo de leitura
	FILE *arquivo = fopen("dados.txt", "r");
	
	// Verifica se o arquivo foi aberto com sucesso
	if (arquivo == NULL) {
	    printf("Erro ao abrir o arquivo.\n");
	    return 1; // Encerra o programa com c�digo de erro
	}
	
	// L� o arquivo caracter a caracter at� o final
	while((c = fgetc(arquivo)) != EOF) {
	    // Se o caracter atual for uma quebra de linha, incrementa o contador de linhas
	    if (c == '\n') {
	        linhas++;
	    }
	}
	
	// Verifica se o �ltimo caracter do arquivo n�o � uma quebra de linha
	// Neste caso, ainda � uma linha, ent�o o contador deve ser incrementado
	if (c != '\n') {
	    linhas++;
	}
	
	// Fecha o arquivo
	fclose(arquivo);
	
	// Imprime o resultado
	printf("O arquivo possui %d linhas.\n", linhas);
	
	return 0; // Encerra o programa com sucesso
}


