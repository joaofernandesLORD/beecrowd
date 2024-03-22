#include <stdio.h>
 
int main() {
	//Pares, Ímpares, Positivos e Negativos
	
	int n1, n2, n3, n4, n5;
	int positivo = 0, nulo = 0, par = 0, negativo = 0, impar = 0;
	
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	//Positivo e Negativo
	
	if(n1>0){
		positivo++;
	}if(n1<0){
		negativo++;
	}
	
	if(n2>0){
		positivo++;
	}if(n2<0){
		negativo++;
	}
	
	if(n3>0){
		positivo++;
	}if(n3<0){
		negativo++;
	}
	
	if(n4>0){
		positivo++;
	}if(n4<0){
		negativo++;
	}
	
	if(n5>0){
		positivo++;
	}if(n5<0){
		negativo++;
	}
	
	//Impar e Par
	
	if(n1%2==0){
		if(n1!=0){
		par++;
		}
	}else{
		impar++;
	}
	
	if(n2%2==0){
		if(n2!=0){
		par++;
		}
	}else{
		impar++;
	}
	
	if(n3%2==0){
		if(n3!=0){
		par++;
		}
	}else{
		impar++;
	}
	
	if(n4%2==0){
		if(n4!=0){
		par++;
		}
	}else{
		impar++;
	}
	
	if(n5%2==0){
		if(n5!=0){
		par++;
		}
	}else{
		impar++;
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	
	return 0; //(LORD)
}
