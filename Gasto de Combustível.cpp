#include <stdio.h>
 
int main() {
	//Gasto de Combustível
	
	float hora, veloc;
	float calculo;
	
	scanf("%f", &hora);
	scanf("%f", &veloc);
	
	calculo=hora*veloc/12;
	
	printf("%.3f\n", calculo);
	
    return 0; //(LORD)
}
