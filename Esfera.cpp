#include <stdio.h>
 
int main() {
	//Esfera
	
	double raioR, formula;
	
	scanf("%lf", &raioR);
	
	formula=(4.0/3)*(3.14159)*(raioR*raioR*raioR);
	
	printf("VOLUME = %.3lf\n", formula);
	
	return 0; //(LORD)
}
