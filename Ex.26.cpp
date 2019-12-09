/*
Função: Programa 26
Autora: Thaissa da Silva Ferrari1
Data de Criação: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o número: \n");
	scanf("%i", &n);
	if(n > 100){
		n = n + 100;
	}
	printf("O valor do número é: %i \n", n);
}
