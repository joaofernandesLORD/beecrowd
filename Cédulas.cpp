#include <stdio.h>
 
int main() {
	//Cédulas
	
	int valor, vall, valor2, valor3, valor4, valor5, valor6, valor7, valor8, troco;
	
	scanf("%d", &valor);
	
	valor2=valor/100;
	troco=valor%100;
	
	valor3=troco/50;
	troco=troco%50;
	
	valor4=troco/20;
	troco=troco%20;
	
	valor5=troco/10;
	troco=troco%10;
	
	valor6=troco/5;
	troco=troco%5;
	
	valor7=troco/2;
	troco=troco%2;
	
	valor8=troco/1;
	troco=troco%1;
	
	printf("%d\n", valor);
	printf("%d nota(s) de R$ 100,00\n", valor2);
	printf("%d nota(s) de R$ 50,00\n", valor3);
	printf("%d nota(s) de R$ 20,00\n", valor4);
	printf("%d nota(s) de R$ 10,00\n", valor5);
	printf("%d nota(s) de R$ 5,00\n", valor6);
	printf("%d nota(s) de R$ 2,00\n", valor7);
	printf("%d nota(s) de R$ 1,00\n", valor8);
	
    return 0; //(LORD)
}
