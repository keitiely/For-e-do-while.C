/*7- Uma aplicação interessante dos computadores é exibir diagramas e gráficos de barras.
Escreva um aplicativo que leia cinco números entre 1 e 30. Para cada número que é lido, seu programa deve exibir o mesmo número de asteriscos adjacentes. Por exemplo, se seu programa lê o número 7, ele deve exibir *******. Exiba as barras dos asteriscos depois
de ler
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
