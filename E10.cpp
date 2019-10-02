/*Função: Programa 10
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int p = 0, alt = 0, imc = 0;
	setlocale(LC_ALL, "");
	printf ("Insira seu peso: \n");
		scanf ("%i", &p);
	printf ("Insira sua altura: \n");
		scanf ("%i", &alt);
	imc = p / (alt * alt);
	printf("O seu peso ideal é: %i \n", imc);
	system("pause");
}
