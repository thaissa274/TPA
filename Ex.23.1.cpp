/*
Função: Programa 23
Autora: Thaissa da Silva Ferrari1
Data de Criação: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	int n1 = 0, n2 = 0, n3 = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o primeiro número: \n");
	scanf("%i", &n1);
	printf("Insira o segundo número: \n");
	scanf("%i", &n2);
	printf("Insira o terceiro número: \n");
	scanf("%i", &n3);	
	if(n1 > n2 and n2 > n3){
		printf("A ordem é: %i \n", n1);
		printf("%i \n", n2);
		printf("%i \n", n3);
	}else if(n1 > n3 and n3 > n2){
		printf("A ordem é: %i \n", n1);
		printf("%i \n", n3);
		printf("%i \n", n2);
	}else if(n2 > n1 and n1 > n3){
		printf("A ordem é: %i \n", n2);
		printf("%i \n", n1);
		printf("%i \n", n3);
	}else if(n2 > n3 and n3 > n1){
		printf("A ordem é: %i \n", n2);
		printf("%i \n", n3);
		printf("%i \n", n1);
	}else if(n3 > n1 and n1 > n2){
		printf("A ordem é: %i \n", n3);
		printf("%i \n", n1);
		printf("%i \n", n2);
	}else if(n3 > n2 and n2 > n1){
		printf("A ordem é: %i \n", n3);
		printf("%i \n", n2);
		printf("%i \n", n1);
	}else{
		printf("Não é possível definir a ordem \n");
	}
	system("pause");
	
}
