/*
Função: Programa 32
Autora: Thaissa da Silva Ferrari
Data de Criação: 09/12/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

/*
1 = Adição
2 = Subtração
3 = Multiplicação
4 = Divisão
*/
int main(){
	int n = 0, n2 = 0, cod = 0, rest = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um número: \n");
		scanf ("%i", &n);
	printf ("Indique outro número: \n");
		scanf ("%i", &n2);
	printf ("Indique a operação desejada: \n");
		scanf ("%i", &cod);
	if(cod>=1 and cod<=4){
		switch(cod){
			case 1:
				rest = n + n2;
				printf("O valor usando essa operação é:%i", rest);
			break;
			case 2:
				rest = n - n2;
				printf("O valor usando essa operação é:%i", rest);
			break;
			case 3:
				rest = n * n2;
				printf("O valor usando essa operação é:%i", rest);
			break;
			case 4:
				rest = n / n2;
				printf("O valor usando essa operação é:%i", rest);
			break;
		}
	}
	else{
		printf("Valor não correspondido");
	}
	system("pause");
}
