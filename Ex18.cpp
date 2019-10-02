/*Função: Programa 18
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float h = 0, m = 0, s = 0;
	setlocale(LC_ALL, "");
	printf ("Indique os segundos: \n");
	scanf ("%f", &s);
	m = s / 60;
	h = s / 3600;
	printf("Esse valor em minutos são: %f\n", m);
	printf("Esse valor em horas são: %f\n", h);
	system("pause");
}
