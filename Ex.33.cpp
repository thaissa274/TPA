/*
Função: Programa 33
Autora: Thaissa da Silva Ferrari
Data de Criação: 09/12/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n = 1;
	char nome;
	setlocale(LC_ALL, "");
	while(n<=2){
		printf ("Informe seu nome: \n");
		scanf ("%s", &nome);
		printf ("Bom dia, %s", nome);
		n = n + 1;
	}
	system("pause");
}
