/*
Função: Programa 35
Autora: Thaissa da Silva Ferrari
Data de Criação: 09/12/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n1 = 0, n2 = 0, res = 0, troca = 0;
	setlocale(LC_ALL, "");
	printf("Insira o 1° número:\n");
	scanf ("%i", &n1);
	printf("Insira o 2° número:\n");
	scanf ("%i", &n2);
	if(n1 > n2){
		for(int c = n1; c >= n2; c--){
			printf("%i\n", c);
		}
	}
	else{
		for(int c = n2; c >= n1; c--){
			printf("%i\n", c);
		}
	}
	system("pause");
}
