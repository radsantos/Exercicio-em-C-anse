#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	
	int numberOne;
	int numberTwo;
	int sum;
	
	printf("Entre com o primeiro valor:");
		scanf("%d",&numberOne);
		fflush(stdin);
			
	printf("Entre com o segundo valor:");	
		scanf("%d",&numberTwo);
		fflush(stdin);
	

	//Se os dois valores forem pares devem somar-los.
	if(numberOne % 2 ==0 && numberTwo % 2 ==0){
		
	
		sum = numberOne + numberTwo;
		printf("Resultado da soma:%d\n",sum);
	}
	//Se um dos valores forem par deve subtrair.
	else {
		
		sum = numberOne - numberTwo;
		printf("Resultado da subtração:%d\n",sum);
	}
	//Ser dos dois valore for impar será multiplicado.
	if(numberOne % 2 == 1 && numberTwo % 2 == 1){
		
		sum = numberOne * numberTwo;
		printf("Resultado da Multiplicaçãoo:%d\n",sum);
	}
	
	
	
	
	
	
	
	system("pause");
}
