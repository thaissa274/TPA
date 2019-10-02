/*Função: Programa 9
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int q = 0, r = 0, dividendo = 0, divisor = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o dividendo: \n");
		scanf ("%i", &dividendo);
	printf ("Insira o divisor: \n");
		scanf ("%i", &divisor);
	q = (dividendo / divisor);
	r = (dividendo % divisor);
	printf("O quociente é igual a: %i \n", q);
	printf("E o resto é igual a: %i \n", r);
	system("pause");
}
