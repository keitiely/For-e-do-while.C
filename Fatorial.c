/*3- O fatorial de um inteiro não negativo 'n' é escrito como n! (pronuncia-se “n fatorialˮ)
e é definido como segue:
n! = n · (n - 1) · (n - 2) · ... · 1 (para valores de n maiores ou iguais a
1) e n! = 1 (para n = 0)
Por exemplo, 5! = 5 · 4 · 3 · 2 · 1, o que dá 120.*/

#include <stdio.h>

int main(){
	int num, fatorial = 1;

	printf("Entre com o número: ");
	scanf("%d", &num);

	/*for(int i=1; i<=num; i++)
	{
		fatorial = fatorial * i;
	}*/

	while(num>=1){
    
		fatorial = fatorial * num;
		num--;
	}

	printf("O fatorial é %d", fatorial);
}
