#include <stdio.h>
#include <stdlib.h>


int main() {


// Trocar posição do nome

	const int SIZE = 10;



	char nome1 [SIZE] = "Rogerio";

	char nome2 [SIZE];



	int i = 0;

	int length = 0;

	
	printf("nome1: %s\n", nome1);
	while( nome1[i] != '\0' && nome1[i] != '\n'){

		length++;

		i++;

	}



	nome2[length-1] = '\0';

	int posval = length-1;

	

	for(i = 0; i < length; i++){

		nome2[posval-i] = nome1[i];	

	}

	

	printf("nome2: %s", nome2);

	

}
