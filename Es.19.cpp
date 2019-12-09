/*
Função: Programa 19
Autora: Thaissa da Silva Ferrari
Data de Criação: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int a = 0, b = 0,c = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o valor para a letra A: \n");
	scanf("%i", &a);
	printf("Informe o valor para a letra B: \n");
	scanf("%i", &b);
	c = a;
	a = b;
	b = c;
	printf("O valor da letra A agora é: %i \n", a);
	printf("E o valor da letra B agora é: %i \n", b);
	system("pause");
}
