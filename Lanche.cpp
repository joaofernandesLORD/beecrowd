#include <stdio.h>
 
int main() {
	//Lanche
	
	int produto, quant;
	float valor, total;
	
	scanf("%d %d", &produto, &quant);
	
	switch(produto){
		case 1:
			//Cachorro Quente
			valor=4.00;
			break;
		case 2:
			//X-Salada
			valor=4.50;
			break;
		case 3:
			//X-Bacon
			valor=5.00;
			break;
		case 4:
			//Torrada Simples
			valor=2.00;
			break;
		case 5:
			//Refrigerante
			valor=1.50;
			break;
			
		default:
			printf("Erro\n");
	}
	
	total=valor*quant;
	
	printf("Total: R$ %.2f\n", total);
	
	return 0; //(LORD)
}
