/*
Fun��o: Programa 32
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 09/12/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

/*
1 = Adi��o
2 = Subtra��o
3 = Multiplica��o
4 = Divis�o
*/
int main(){
	int n = 0, n2 = 0, cod = 0, rest = 0;
	setlocale(LC_ALL, "");
	printf ("Indique um n�mero: \n");
		scanf ("%i", &n);
	printf ("Indique outro n�mero: \n");
		scanf ("%i", &n2);
	printf ("Indique a opera��o desejada: \n");
		scanf ("%i", &cod);
	if(cod>=1 and cod<=4){
		switch(cod){
			case 1:
				rest = n + n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
			case 2:
				rest = n - n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
			case 3:
				rest = n * n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
			case 4:
				rest = n / n2;
				printf("O valor usando essa opera��o �:%i", rest);
			break;
		}
	}
	else{
		printf("Valor n�o correspondido");
	}
	system("pause");
}
