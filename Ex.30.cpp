/*
Função: Programa 30
Autora: Thaissa da Silva Ferrari
Data de Criação: 09/12/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um número de 1 á 7: \n");
		scanf ("%i", &n);
	if (n >= 1 and n <= 7){
		switch(n){
			case 1: printf("Domingo");
			break;
			case 2: printf("Segunda");
			break;
			case 3: printf("Terça");
			break;
			case 4: printf("Quarta");
			break;
			case 5: printf("Quinta");
			break;
			break;
			case 7: printf("Sábado");
			break;
		}
	}
	else{
		printf("Digite outro valor");
	}
	system("pause");
}

