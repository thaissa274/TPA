/*
Função: Programa 24
Autora: Thaissa da Silva Ferrari1
Data de Criação: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	int idade = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira a sua idade: \n");
	scanf("%i", &idade);
	if(idade >= 5 and idade <= 11){
		printf("Sua categoria é infantil \n");
	}else if(idade >= 12 and idade <= 17){
		printf("Sua categoria é juvenil	\n");
	}else if(idade >= 18){
		printf("Sua categoria é adulta \n");
	}else{
		printf("Você é muito novo \n");
	}
	system("pause");
}
