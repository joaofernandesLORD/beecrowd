#include <stdio.h>

int main(){
	//Seis Números Ímpares
	
	int number, n1, n2, n3, n4, n5, n6;
	
	scanf("%d", &number);
	
	if(number%2==0){
		n1=number+1;
		n2=n1+2;
		n3=n2+2;
		n4=n3+2;
		n5=n4+2;
		n6=n5+2;
	}else{
		n1= number;
		n2=n1+2;
		n3=n2+2;
		n4=n3+2;
		n5=n4+2;
		n6=n5+2;
	}
	
	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
	printf("%d\n", n4);
	printf("%d\n", n5);
	printf("%d\n", n6);
	
	return 0; //(LORD)
}
