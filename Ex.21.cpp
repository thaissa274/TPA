/*
Fun��o: Programa 21
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n = 0,cubo = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o n�mero: \n");
	scanf("%i", &n);
	if(n > 5 and n < 20){
		cubo = n * n * n;
		printf("O seu cubo �: %i \n", cubo);
	}else{
		printf("N�o a cubo do n�mero: %i \n", n);
	}
	system("pause");
}
