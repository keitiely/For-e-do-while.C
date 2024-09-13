/*4- Escreva um aplicativo que solicita ao usuário que insira o tamanho do lado de um quadrado e, então,
exibe um quadrado vazio desse tamanho com asteriscos.
Seu programa deve trabalhar com quadrados de todos os comprimentos de lado possíveis entre 1 e 20.*/

#include <stdio.h>
int main() {
    int tamanho; 
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &tamanho);

    // Verifica se o tamanho esta entre 1 e 20
    if (tamanho < 1 || tamanho > 20) {
        printf("Tamanho do lado nao permitido, insira um número entre 1 e 20.\n");
        return 1; // Retorna um código de erro
    }

//primeira linha do quadrado
for (int i=1; i<=tamanho ; i++){
       printf(" *");
}
 printf("\n");

//segunda linha do quadrado ate a penultima, o meio do quadrado   
for (int i=2 ; i<tamanho ; i++){
printf(" *");               //primeiro asterisco da segunda linha do quadrado

    for (int j=2; j<tamanho ; j++){
         printf("  ");   //espaco de cada asterisco no meio do quadrado
      }
    printf(" * \n");   //ultimo asterisco na linha pulando para a proxima linha
 }

    for (int i=1; i<=tamanho ; i++){
         printf(" *");     //ultima linha seguindo mesmo padrao da primeira
    }
printf("\n");
     return 0;
}
