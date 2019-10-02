/*Função: Programa 15
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float raio = 0, PI = 3.1416, comp = 0, area = 0, volume = 0, cubo = 0;
	setlocale(LC_ALL, "");
	printf ("Indique o raio da sua circunferência: \n");
	scanf ("%f", &raio);
	cubo = raio * raio * raio;
	comp = 2 * PI * raio;
	area = raio * raio * PI;
	volume = ((3/4) * PI) * cubo;
	printf("O comprimento da sua circunferência é de: %f \nA área é de: %f \nE o volume: %f \n",comp, area, volume);
	system("pause");
}
