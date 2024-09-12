/*9- O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo,
1ˆ2 =1  2ˆ2 = 1+3 3ˆ2 = 1+3+5
  Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.*/
#include <stdio.h>
int main(){
  int num, impar=1, soma=0;

  printf("Digite um numero, para calcular o quadrado: ");
  scanf("%d", &num);
  
  for(int i=1; i<=num; i++){
       soma+= impar;
       impar+= + 2;
    }
  printf("%dˆ2 = %d",num, soma);

  }
