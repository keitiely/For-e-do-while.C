/*4- Escreva um aplicativo que solicita ao usuário que insira o tamanho do lado de um quadrado e, então,
exibe um quadrado vazio desse tamanho com asteriscos.
Seu programa deve trabalhar com quadrados de todos os comprimentos de lado possíveis entre 1 e 20.*/

#include <stdio.h>

int main()
{
	int lado;

	printf("Entre como tamanho do quadrado: ");
	scanf("%d", &lado);

	for(int linha=1; linha<=lado;linha++)
	{
		for(int coluna=1; coluna<=lado; coluna++)
		{	
			putchar((linha>1 && linha < lado && coluna>1 && coluna < lado) ? 32:229);
		}
		printf("\n");
	}

}
