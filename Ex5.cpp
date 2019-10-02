/*Função: Programa 5
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float preco = 0, area = 0, b = 0, a = 0, metro = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a base do seu retângulo: \n");
	scanf ("%f", &b);
	printf ("Insira a altura do seu retângulo: \n");
	scanf ("%f", &a);
	printf ("Insira o preço do metro quadrado: \n");
	scanf ("%f", &metro);
	area = b * a;
	preco = area * metro;
	printf ("A área do seu retângulo é %f m² \n", area);
	printf ("E o preço do terreno é R$ %f \n", preco);
	printf ("\n");
	system("pause");
}
