#include <stdio.h>
 
int main() {
	//Área
	//triangulo = tri, circulo = cir, trapezio = tra, quadrado = qua, retangulo = ret
	
	double A, B, C;
	double tri, cir, tra, qua, ret, pi;
	pi=3.14159;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	tri=(C*A)/2;
	cir=pi*(C*C);
	tra=((A+B)*C)/2;
	qua=B*B;
	ret=A*B;
	
	printf("TRIANGULO: %.3lf\n", tri);
	printf("CIRCULO: %.3lf\n", cir);
	printf("TRAPEZIO: %.3lf\n", tra);
	printf("QUADRADO: %.3lf\n", qua);
	printf("RETANGULO: %.3lf\n", ret);
	
	return 0; //(LORD)
}
