/*
Função: Programa 20
Autora: Thaissa da Silva Ferrari
Data de Criação: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	float n = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o valor do número: \n");
	scanf("%f", &n);
	if(n > 0){
		printf("Positivo \n");
	}else if(n < 0){
		printf("Negativo \n");
	}else{
		printf("Neutro \n");
	}
	system("pause");
}
