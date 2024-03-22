#include <stdio.h>
 
int main() {
	//Conversão de Tempo
	
	long int tempo, hora, min, sec, min2;
	
	scanf("%i", &tempo);
	
	min=tempo/60;
	hora=min/60;
	min=min%60;
	sec=tempo%60;
	
	printf("%i:%i:%i\n", hora, min, sec);
	
    return 0; //(LORD)
}
