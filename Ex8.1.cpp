/*Função: Programa 8
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float  nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, soma = 0, media = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a sua primeira nota: \n");
		scanf ("%f", &nota1);
	printf ("Insira a sua segunda nota: \n");
		scanf ("%f", &nota2);
	printf ("Insira a sua terceira nota: \n");
		scanf ("%f", &nota3);
	printf ("Insira a sua quarta nota: \n");
		scanf ("%f", &nota4);
	soma = nota1 + nota2 + nota3 + nota4;
	media = soma / 4;
	printf("A média das notas são: %f \n", media);
	system("pause");
}
