/*Fun��o: Programa 5
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float preco = 0, area = 0, b = 0, a = 0, metro = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a base do seu ret�ngulo: \n");
	scanf ("%f", &b);
	printf ("Insira a altura do seu ret�ngulo: \n");
	scanf ("%f", &a);
	printf ("Insira o pre�o do metro quadrado: \n");
	scanf ("%f", &metro);
	area = b * a;
	preco = area * metro;
	printf ("A �rea do seu ret�ngulo � %f m� \n", area);
	printf ("E o pre�o do terreno � R$ %f \n", preco);
	printf ("\n");
	system("pause");
}
