/*
Fun��o: Programa 25
Autora: Thaissa da Silva Ferrari1
Data de Cria��o: 27/10/2019
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
	printf("Indique a sua m�dia final \n");
	scanf("%f", &mediaf);
	if(mediaf >= 7){
		printf("Voc� foi aprovado \n");
	}else{
		printf("Voc� foi reprovado \n");
	}
	system("pause");
}
