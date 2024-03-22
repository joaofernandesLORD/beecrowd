#include <stdio.h>
 
int main() {
	//Cálculo Simples
	
	int produto, quant, produto2, quant2;
	float valor, valor2, total;
	
	//scanf("%d ", &produto); scanf("%d ", &quant); scanf("%f", &valor);
	scanf("%d %d %f", &produto, &quant, &valor);
	
	printf("Produto: %d, Quantidade: %d, Valor: %.2f\n", produto, quant, valor);
	
	//scanf("%d ", &produto2); scanf("%d ", &quant2); scanf("%f", &valor2);
	scanf("%d %d %f", &produto2, &quant2, &valor2);
	
	printf("Produto: %d, Quantidade: %d, Valor: %2.f\n", produto2, quant2, valor2);
	
	total=quant*valor+quant2*valor2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
    return 0; //(LORD)
}
