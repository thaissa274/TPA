/*Fun��o: Programa 11
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float fahreinheit = 0, celsius = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o valor em Celsius: \n");
	scanf ("%f", &celsius);
	fahreinheit = (celsius * 1.8) + 32.00;
	printf("O valor em Fahrenheit �: %f \n", fahreinheit);
	system("pause");
}

