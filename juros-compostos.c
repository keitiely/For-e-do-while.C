/*8- Uma pessoa investe US$ 1.000 em uma conta-poupança que rende juros de 5% ao ano.
Supondo que todo o juro seja aplicado, calcule e imprima a quantia de dinheiro na conta no fim de cada ano por 10 anos.
Utilize a seguinte fórmula para determinar as quantidades:
a = p(1 + r)n
onde
p é a quantia original investida (isto é, o principal)
r é a taxa de juros anual (por exemplo, utilize 0,05 para 5%)
n é o número de anos
a é a quantia em depósito no fim do n-ésimo ano.*/
#include<stdio.h>
#include<math.h>
int main(){
  float p, r, a, n;

  for(n=1; n<=10; n++){
    p = 1000;
    r = 0.05;
    a = p * pow(1+r, n);
    printf("O valor do dinheiro na conta no fim do ano %.0f e: %.2f\n", n, a);
  } 
}
