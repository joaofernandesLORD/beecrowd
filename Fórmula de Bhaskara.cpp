#include <stdio.h>
#include <math.h>

int main(){
	//Fórmula de Bhaskara
	
	double a, b, c, delta, linhaum, linhadois;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
		if(a!=0){
			delta=pow(b,2)-4*a*c;
			
			if(delta>0){
				linhaum=(-1*b+sqrt(delta))/(2*a);
	
				linhadois=(-1*b-sqrt(delta))/(2*a);
	
	printf("R1 = %.5lf\n", linhaum);
	
	printf("R2 = %.5lf\n", linhadois);
			}else{
				printf("Impossivel calcular\n");
			}
	
		}else{
			printf("Impossivel calcular\n");
		}
		
	
	return 0; //(LORD)
}
