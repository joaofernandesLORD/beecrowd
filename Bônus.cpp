#include <stdio.h>
 
int main() {
	//Sal�rio com B�nus	
 	
 	double vendas, bonus, sal;
 	char nome[40];
 	
 	scanf("%s", &nome);
 	
 	scanf("%lf", &sal);
 	scanf("%lf", &vendas);
 	
 	bonus = sal + vendas * 0.15;
 	
 	printf("TOTAL = R$ %.2lf\n", bonus);
 	
    return 0; //(LORD)
}
