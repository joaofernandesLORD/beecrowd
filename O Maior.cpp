#include <stdio.h>
 
int main() {
	//O Maior
	
	int A, B, C;
	int maior;
	
	scanf("%d %d %d", &A, &B, &C);
	
	maior=A>B?(A>C?A:C):(B>C?B:C);
    //menor=A<B?(A<C?A:C):(B<C?B:C);
	
	printf("%d eh o maior\n", maior);
	
	return 0; //(LORD)
}
