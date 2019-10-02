/*Função: Programa 16
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float base = 0, altura = 0, metroQ = 0, wf = 0;
	setlocale(LC_ALL, "");
	printf ("Indique a altura: \n");
		scanf ("%f", &altura);
	printf ("Indique a base: \n");
		scanf ("%f", &base);
	metroQ = altura * base;
	wf = metroQ * 18;
	printf("A área em metros quadrados é: %f  \n",metroQ);
	printf ("E a potencia de iluminação por watts que deverá ser utilizada é  ",wf);
	system("pause");
}

