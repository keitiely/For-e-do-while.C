/*3- O fatorial de um inteiro não negativo 'n' é escrito como n! (pronuncia-se “n fatorialˮ) e é definido como segue:
n! = n · (n - 1) · (n - 2) · ... · 1 (para valores de n maiores ou iguais a 1) e n! = 1 (para n = 0)
Por exemplo, 5! = 5 · 4 · 3 · 2 · 1, o que dá 120.*/

#include<stdio.h>
int main(){
  int n, fatorial, i;

  printf("Digite um numero: ");
  scanf("%d", &n);
  //verifica se e negativo
  if(n<0){
    printf("Nao existe fatorial de um numero negativo");
    return 1;//retorna 1 codigo de erro
  }
  //calculando fatorial
  for(fatorial=1, i=n; i>=1; i--){
    fatorial *= i;
  }
  //imprime o resultado
  printf("O fatorial de %d e: %d", n, fatorial);
  
  return 0;//retorna sucesso
}
