/*Questao 2: Faça um programa que receba vários números, calcule e mostre:
 a.A soma dos números digitados;
 b.A quantidade de números digitados;
 c.A múdia dos números digitados;
 d.O maior número digitado;
 e.O menor número digitado;
 f.A média dos números pares;
 g.A percentagem dos números ímpares entre todos os números digitados.
 Finalize a entrada de dados com a digitação do número 30000. Entende-se que o usuário
 não possa digitar valor maior que 30000.*/

#include <stdio.h>

int main()
{
  float num, soma=0, maior=-30000, menor=30000, somapar=0;
  int count=0, countimp=0;

  do 
  {
    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num>=30000)   
      break;

    if(num>maior)
	maior=num;

    if(num<menor);
	menor=num;

    if(((int)num)%2==0)
	somapar+=num;
    else
	countimp++;

      soma+=num;
      count++;

   } while(num<30000);

   printf("\nA soma dos numeros: %.2f\n", soma);
   printf("A quantidade dos numeros digitados: %d\n", count);
   printf("A media dos numeros digitados: %.2f\n", soma/count);
   printf("O maior numero digitado: %.2f\n", maior);
   printf("O menor numero digitado: %.2f\n", menor);
   printf("A media dos pares: %.2f\n", somapar/(count-countimp));
   printf("A porcentagem dos numeros impares em relacao ao total: %.2f%%\n", (float)countimp/(float)count*100.00);


}
