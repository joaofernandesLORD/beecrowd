#include <stdio.h>
 
int main() {
	//Notas e Moedas
	
	double valor, n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5, m1, troco;
	
	scanf("%lf", &valor);
	
	n100=valor/100.0;
	troco=valor%100.0;
	
	n50=troco/50.0;
	troco=troco%50.0;
	
	n20=troco/20.0;
	troco=troco%20.0;
	
	n10=troco/10.0;
	troco=troco%10.0;
	
	n5=troco/5.0;
	troco=troco%5.0;
	
	n2=troco/2.0;
	troco=troco%2.0;
	
	m100=troco/1.0;
	troco=troco%1.0;
	
	m50=troco/0.50;
	troco=troco%0.50;
	
	m25=troco/0.25;
	troco=troco%0.25;
	
	m10=troco/0.10;
	troco=troco%0.10;
	
	m5=troco/0.05;
	troco=troco%0.05;
	
	m1=troco/0.01;
	troco=troco%0.01;
	
	printf("NOTAS:\n");
	printf("%.2lf nota(s) de R$ 100,00\n", n100);
	printf("%.2lf nota(s) de R$ 50,00\n", n50);
	printf("%.2lf nota(s) de R$ 20,00\n", n20);
	printf("%.2lf nota(s) de R$ 10,00\n", n10);
	printf("%.2lf nota(s) de R$ 5,00\n", n5);
	printf("%.2lf nota(s) de R$ 2,00\n", n2);
	
	printf("MOEDAS:\n");
	printf("%.2lf moeda(s) de R$ 1.00\n", m100);
	printf("%.2lf moeda(s) de R$ 0.50\n", m50);
	printf("%.2lf moeda(s) de R$ 0.25\n", m25);
	printf("%.2lf moeda(s) de R$ 0.10\n", m10);
	printf("%.2lf moeda(s) de R$ 0.05\n", m5);
	printf("%.2lf moeda(s) de R$ 0.01\n", m1);
	
    return 0; //(LORD)
}
