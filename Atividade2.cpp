#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define weightOne 4
#define weightTwo 6
#define TAM 10




int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float av1[TAM], av2[TAM];
	float arithmeticMedia,weightedAverage, sumAv1,sumAv2,subMedia;
	
	
	
	weightedAverage = 0;
	arithmeticMedia = 0;
	sumAv1 = 0;
	sumAv2 = 0;
	
	int i,j;
	

	
		
	printf("AVALIANÇÃO 1\n");
	for(i=1; i<=TAM; i++){
		printf("Entre com a nota AV1_Aluno %d=>Nota:",i);
			scanf("%f",&av1[i]);		
		
		sumAv1+= (av1[i] * weightOne);
		
			
	}
	printf("\n\n");
	printf("AVALIANÇÃO 2\n");
	
	
	for(j=1; j<=TAM; j++){
		printf("Entre com a nota AV2_Aluno %d=>Nota:",j);
			scanf("%f",&av2[j]);
			
		sumAv2 += (av2[j] * weightTwo);
	}
	
	printf("\n\n");

		
	weightedAverage = (sumAv1 + sumAv2) / (weightOne + weightTwo);
	subMedia = sumAv1+sumAv2;
	arithmeticMedia = subMedia / TAM;

	printf("\nMédia Ponderada: %1.f\n",weightedAverage );
	printf("\nMédia Aritimétrica: %1.f\n",arithmeticMedia);
	
	system("pause");
	
	
	
	
}
