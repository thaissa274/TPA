/*Função: Programa 14
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float altura1 = 0, altura2 = 0, media = 0;
	char pessoa1, pessoa2;
	setlocale(LC_ALL, "");
	printf ("Indique a altura de uma das pessoas: \n");
		scanf ("%f", &altura1);
	printf ("Indique a altura da outra pessoa: \n");
		scanf ("%f", &altura2);
	printf ("Indique o nome da primeira pessoa: \n");
		scanf ("%s", &pessoa1);
	printf ("Indique o nome da segunda pessoa: \n");
		scanf ("%s", &pessoa2);
	media = (altura1 + altura2) /2;
	printf("A média entre %s e %s é de: %f", pessoa1, pessoa2, media);
	system("pause");
}
