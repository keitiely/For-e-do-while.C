/*6- Escreva um aplicativo que calcula o produto dos números inteiros ímpares de 1 a 15.*/
#include<stdio.h>
int main(){
  int impares=1;

  for(int i=1; i<=15; i++){
    if(i % 2 != 0){
      impares*= i;
    }
  }
  printf("O produto dos numeros inteiros impares de 1 a 15 e: %d", impares);
}
