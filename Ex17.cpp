/*Função: Programa 17
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float h = 0, m = 0, s = 0, resul = 0;
	setlocale(LC_ALL, "");
	printf ("Indique as horas: \n");
	scanf ("%f", &h);
	printf ("Indique os minutos: \n");
	scanf ("%f", &m);
	printf ("Indique os segundos: \n");
	scanf ("%f", &s);
	resul = (h * 3600) + (m * 60) + s;
	printf("Os segundos finais são: %f \n", resul);
	system("pause");
}
