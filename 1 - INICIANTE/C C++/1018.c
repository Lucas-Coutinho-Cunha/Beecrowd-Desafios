#include <stdio.h>

int main(void)
{
	int valor;
	scanf("%d", &valor);
	printf("%d", valor);

	int n100, n100resto, n50, n50resto, n20, n20resto, n10, n10resto, n5, n5resto, n2, n2resto;
	
	n100 = valor / 100;
	n100resto = valor % 100;
	
	n50 = n100resto / 50;
	n50resto = n100resto % 50;
	
	n20 = n50resto / 20;
	n20resto = n50resto % 20;
	
	n10 = n20resto / 10;
	n10resto = n20resto % 10;
	
	n5 = n10resto / 5;
	n5resto = n10resto % 5;
	
	n2 = n5resto / 2;
	n2resto = n5resto % 2;
	
	printf("\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n2resto);

	return 0;
}