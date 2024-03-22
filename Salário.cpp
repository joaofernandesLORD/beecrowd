#include <stdio.h>
 
int main() {
	//Salário	
 	
 	int numb_funcionario, horas;
 	float valor_hora, salario;
 	
 	scanf("%d", &numb_funcionario);
 	scanf("%d", &horas);
 	
 	scanf("%f", &valor_hora);
 	
 	salario=horas*valor_hora;
 	
 	printf("NUMBER = %d\n", numb_funcionario);
 	printf("SALARY = U$ %.2f\n", salario);
 	
    return 0; //(LORD)
}
