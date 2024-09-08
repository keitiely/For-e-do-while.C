/*4- Escreva um aplicativo que solicita ao usuário que insira o tamanho do lado de um quadrado e, então,
exibe um quadrado vazio desse tamanho com asteriscos.
Seu programa deve trabalhar com quadrados de todos os comprimentos de lado possíveis entre 1 e 20.*/

#include <stdio.h>
int main() {
    int lado; 
    printf("Digite o tamanho do lado do quadrado:\n");
    scanf("%d", &lado);

    // Verifica se o tamanho esta entre 1 e 20
    if (lado < 1 || lado > 20) {
        printf("Tamanho do lado nao permitido, insira um número entre 1 e 20.\n");
        return 1; // Retorna um código de erro
    }

    // Imprime o quadrado vazio
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
           
    // Imprime asterisco no contorno do quadrado
    //i == 0: Verifica se i está na primeira linha.
    //i == lado -1: Verifica se i está na ultima linha.
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
  printf("\n"); // Move para a próxima linha
    }

    return 0; // Retorna sucesso
}
