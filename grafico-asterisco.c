/*7- Uma aplicação interessante dos computadores é exibir diagramas e gráficos de barras.
Escreva um aplicativo que leia cinco números entre 1 e 30. Para cada número que é lido, 
seu programa deve exibir o mesmo número de asteriscos adjacentes. Por exemplo, se seu programa lê o número 7,
ele deve exibir *******. Exiba as barras dos asteriscos depois de ler
os cinco números.*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    int numeros[5];

    for (int i = 0; i < 5; i++) {
    while (1) {
        printf("Digite o número entre 1 e 30: ");
        scanf("%d", &num);//leitura dos num
        if (num >= 1 && num <= 30) {
            numeros[i] = num;
                break;
        } else {
       printf("Erro, digite numero entre 1 e 30.\n");
        }
    }
 }
    printf("Gráfico de Barras:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < numeros[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/* Outra forma sem Vetor
#include <stdio.h>

int main()
{
	int num, aCount=0, bCount=0, cCount=0, dCount=0, eCount=0, qtd=1;

	while(qtd<=30)
	{
		printf("Entre com um número:");
		scanf("%d", &num);

		switch(num)
		{
			case 10:
			case 9:
				++aCount;
				break;

			case 8:
			case 7:
				++bCount;
				break;

			case 6:
			case 5:
				++cCount;
				break;

			case 4:
			case 3:
				++dCount;
				break;

			case 2:
			case 1:
			case 0:
				++eCount;
				break;

			default:
				printf("Número inválido\n");	
		}
		qtd++;
	}

	printf("\n10-9: \t");
	for(int i=1; i<=aCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n8-7: \t");
	for(int i=1; i<=bCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n6-5: \t");
	for(int i=1; i<=cCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n4-3: \t");
	for(int i=1; i<=dCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n2-0: \t");
	for(int i=1; i<=eCount;i++)
	{
		printf("\u25A0");
	}
}*/
