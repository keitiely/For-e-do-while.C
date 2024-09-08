/*2- Faça um programa que receba vários números, calcule e mostre:
a- A soma dos números digitados;
b- A quantidade de números digitados;
c- A média dos números digitados;
d- O maior número digitado;
e- O menor número digitado;
f- A média dos números pares;
g- A percentagem dos números ímpares entre todos os números digitados.
Finalize a entrada de dados com a digitação do número 30000. Entende-se que o usuário
não possa digitar valor maior que 30000.
#include <stdio.h>
int main(){
  int numeros, soma, quantidade, media, maior, menor, mediapar, porcenimpar;*/

  #include <stdio.h>

  int main() {
    int num;
    int contador = 0;  
    int soma = 0;
    int maior, menor;         
    int primeiro_numero = 1;// Flag para verificar se é o primeiro número
    int soma_pares = 0;
    int contador_pares = 0;
    int contador_impares = 0;
    float media, media_pares, porcentagem_impares;


      printf("Digite números (30000 para parar):\n");
      // Solicita o primeiro número antes do loop
    
        // Loop para ler números até que 30000 seja digitado
        while (1) {
            printf("Digite um número: ");
            scanf("%d", &num);

            // Verifica se o número é 30000 para encerrar o loop
            if (num == 30000) {
                break;
            }

            // Verifica se o número é maior que 30000
            if (num > 30000) {
                printf("Número inválido! Digite um número menor ou igual a 30000.\n");
                continue;
            }
            //Atualiza a soma
        contador++; // B- Incrementa o contador para cada número válido
        soma += num; // A- Adiciona o número à soma

        //D e E- maior e menor numero
        if(primeiro_numero){
           maior = num;
           menor = num;
           primeiro_numero=0; // Flag para indicar que o primeiro numero foi lido
        } else {
            // Atualiza maior e menor se necessário
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }

        //Verifica numeros impares e pares
          if (num % 2 == 0) {
            soma_pares += num;
            contador_pares++;
          } else {
            contador_impares++;
          }   
      }

    //F- media pares 
      if(contador_pares > 0){
      media_pares = (float)soma_pares / contador_pares;
        //G- porcentagem impares
    porcentagem_impares = (contador > 0) ? (float)((float)contador_impares / contador) * 100 : 0;
  } 
      else {
      media = media_pares = porcentagem_impares = 0;
    }
      //resutados
      printf("A soma dos numeros digitados e: %d\n", soma);
      printf("Quantidade de números digitados: %d\n", contador);
    //C- media dos numeros digitados
    
       media = (float)soma / contador;
    printf("A media dos numeros digitados e: %.2f\n", media);
    // maior e menor numero
    printf("O maior numero digitado e: %d\n", maior);
    printf("O menor numero digitado e: %d\n", menor);
    //media pares
    printf("A media dos numeros pares e: %.2f\n", media_pares);
    //porcentagem impares
    printf("A porcentagem de valores impares e: %.2f%%\n", porcentagem_impares);
     
  }
