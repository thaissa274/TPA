/*
Função: Programa 25
Autora: Thaissa da Silva Ferrari1
Data de Criação: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	char nome;
	float mediaf = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Indique seu nome \n");
	scanf("%s", &nome);
	printf("Indique a sua média final \n");
	scanf("%f", &mediaf);
	if(mediaf >= 7){
		printf("Você foi aprovado \n");
	}else{
		printf("Você foi reprovado \n");
	}
	system("pause");
}
