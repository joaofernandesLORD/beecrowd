#include <stdio.h>

int main(){
	//Pares entre Cinco Números
	
	int n1, n2, n3, n4, n5, par, impar;		
	
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	if(n1%2==0){
		par++;
	}else{
		impar++;
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
	
	printf("%d valores pares\n", par);
	
	return 0; //(LORD)
}
