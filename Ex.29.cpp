/*
Função: Programa 29
Autora: Thaissa da Silva Ferrari
Data de Criação: 09/12/2019
*/

/*
1 = cachorro-quente / R$3.50;
2 = x-salada / R$5.00;
7 = x-buguer / R$8.90;
15 = x-tudo / R$12.70;
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	printf (" Escolha o número para consultar o preço do lanche desejado: \n");
		scanf ("%i", &n);
		switch(n){
			case 1: printf("R$3,50");
			break;
			case 2: printf("R$5.00");
			break;
			case 3: printf("R$8.90");
			break;
			case 4: printf("12.70");
			break;
			default: printf("Valor não encontrado.");
			break;
		}
	system("pause");
}
