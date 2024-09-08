/*5- Escreva um aplicativo que localiza o menor de vários números inteiros.
Suponha que o primeiro valor lido especifica o número de valores a serem inseridos pelo usuário.*/
#include <stdio.h>
int main(){
  int num, menor, quant;

  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &quant);

//1o valor
  printf("Digite o primeiro numero: ");
  scanf("%d", &num);

  //incializando o menor com o primeiro valor
  menor = num;

  //para cada numero
  for(int i=2; i<=quant; i++){
    printf("Digite o %do numero: ", i);
    scanf("%d", &num);

    //atualizando o menor
    if(num < menor){
      menor = num;
    }
  }
   printf("O menor numero e: %d\n", menor);
  }
