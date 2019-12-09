/*
Função: Programa 22
Autora: Thaissa da Silva Ferrari1
Data de Criação: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n1 = 0, n2 = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o valor do primeiro número: \n");
	scanf("%i", &n1);
	printf("Insira p valor do segundo número: \n");
	scanf("%i", &n2);
	if(n1 > n2){
		printf("O maior valor é: %i \n", n1);
	}else if(n2 < n1){
		printf("O maior número é: %i \n", n2);
	}else{
		printf("Ambos os números são iguais \n");
	}
	system("pause");
	
}
