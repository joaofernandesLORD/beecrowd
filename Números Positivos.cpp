#include <stdio.h>
 
int main() {
	//Números Positivos
	
	int n1, n2, n3, n4, n5;
	int positivo, nulo, par, negativo, impar;
	
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	//Positivo e Negativo
	
	if(n1>=  0){
		positivo++;
	}else{
		negativo++;
	}
	
	if(n2>= 0){
		positivo++;
	}else{
		negativo++;
	}
	
	if(n3>= 0){
		positivo++;
	}else{
		negativo++;
	}
	
	if(n4>= 0){
		positivo++;
	}else{
		negativo++;
	}
	
	if(n5>= 0){
		positivo++;
	}else{
		negativo++;
	}
	
	//Impar e Par
	
	if(n1%2==0){
		par++;
	}else{
		impar++;;
	}
	
	if(n2%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(n3%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(n4%2==0){
		par++;
	}else{
		impar++;
	}
	
	if(n5%2==0){
		par++;
	}else{
		impar++;
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	
	return 0; //(LORD)
}
