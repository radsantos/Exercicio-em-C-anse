#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	
	char nome[] = "Roge";
	printf("nome = %s", nome);
	
	for(int i=0; nome[i] != '\0'; i++){
		
		if(nome[i] >=65 && nome[i]<=90){
				nome[i]+=32;
			
		}else if(nome[i]>=97 && nome[i]<=122){
			
			nome[i]-=32;
		}
	
		
		
	}
		printf("\nnome = %s\n", nome);
	

	system("pause");
}
