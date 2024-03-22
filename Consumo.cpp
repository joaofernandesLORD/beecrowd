#include <stdio.h>
 
int main() {
	//Consumo
	int distancia;
	float litros, consumo;
	
	scanf("%d %f", &distancia, &litros);
	
	consumo=distancia/litros;
	
	printf("%.3f km/l\n", consumo);
	
	return 0; //(LORD)
}
