#include <stdio.h>
 
int main() {
	//Média 3
 	double N1, N2, N3, N4, media, mediafinal, exame;
	
	scanf("%lf", &N1);
	scanf("%lf", &N2);
	scanf("%lf", &N3);
	scanf("%lf", &N4);
	
	media=(N1*2+N2*3+N3*4+N4*1)/10;
	printf("Media: %.1lf\n", media);
	
	if(media>=7.0){
		
		printf("Aluno aprovado.\n");
		
	}if(media<7.0 && media>=5.0){
		printf("Aluno em exame.\n");
		
		scanf("%lf", &exame);
		
		mediafinal=(exame+media)/2;
		
		printf("Nota do exame: %.1lf\n", exame);
		
		if(mediafinal>=5.0){
			printf("Aluno aprovado.\n");
		}if(mediafinal<5.0){
			printf("Aluno reprovado.\n");
		}
		
			printf("Media final: %.1lf\n", mediafinal);

	}if(media<5.0){
		printf("Aluno reprovado.\n");
		
	}
	

 	
    return 0; //(LORD)
}
