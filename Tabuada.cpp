#include <stdio.h>

int main(){
	//Tabuada
	
	int number=0;
	int mult1, mult2, mult3, mult4, mult5, mult6, mult7, mult8, mult9, mult10;
	
	scanf("%d", &number);
	
	if(number>2 && number<1000){
		
		mult1=number*1;
		mult2=number*2;
		mult3=number*3;
		mult4=number*4;
		mult5=number*5;
		mult6=number*6;
		mult7=number*7;
		mult8=number*8;
		mult9=number*9;
		mult10=number*10;
		
			printf("1 x %d = %d\n", number, mult1);
			printf("2 x %d = %d\n", number, mult2);
			printf("3 x %d = %d\n", number, mult3);
			printf("4 x %d = %d\n", number, mult4);
			printf("5 x %d = %d\n", number, mult5);
			printf("6 x %d = %d\n", number, mult6);
			printf("7 x %d = %d\n", number, mult7);
			printf("8 x %d = %d\n", number, mult8);
			printf("9 x %d = %d\n", number, mult9);
			printf("10 x %d = %d\n", number, mult10);
		
	}
		
	return 0; //(LORD)
}
