/*
Fun��o: Programa 31
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 09/12/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero de 1 � 12: \n");
		scanf ("%i", &n);
		switch(n){
			case 1: printf("Janeiro");
			break;
			case 2: printf("Fevereiro");
			break;
			case 3: printf("Mar�o");
			break;
			case 4: printf("Abril");
			break;
			case 5: printf("Maio");
			break;
			case 6: printf("Junho");
			break;
			case 7: printf("Julho");
			break;
			case 8: printf("Agosto");
			break;
			case 9: printf("Setembro");
			break;
			case 10: printf("Outubro");
			break;
			case 11: printf("Novembro");
			break;
			case 12: printf("Dezembro ");
			break;
			default: printf("Esse n�mero n�o corresponde a nenhum m�s.");
			break;
		}
	system("pause");
}
