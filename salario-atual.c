/*1- Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a- Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00;
b- Em 2006 recebeu aumento de 1.5% sobre seu salário inicial;
c- A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro
do percentual do ano anterior.
Faça um programa que determine o salário atual desse funcionário.*/
#include <stdio.h>
int main(){
  float salario, aumento, porcen = 0.015, novo_salario;
  int ano;

  for(ano=2006; ano<=2024; ano++, porcen*=2){
    salario = 1000 * porcen;
    novo_salario = salario + 1000;
    if (ano == 2024){
      printf("salario atual: %.2f", novo_salario);
    }
  }
}
