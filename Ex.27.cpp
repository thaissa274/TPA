/*
Fun��o: Programa 27
Autora: Thaissa da Silva Ferrari1
Data de Cria��o: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	int n1 = 0, n2 = 0, n3 = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o primeiro n�mero: \n");
	scanf("%i", &n1);
	printf("Insira o segundo n�mero: \n");
	scanf("%i", &n2);
	printf("Insira o terceiro n�mero: \n");
	scanf("%i", &n3);
	if(n1 > n2 and n2 > n3){
		printf("O maior n�mero �: %i \n", n1);
	}else if(n2 > n1 and n1 > n3){
		printf("O maior n�mero �: %i \n", n2);
	}else{
		printf("O maior n�mero �: %i \n", n3);
	}
	
}
