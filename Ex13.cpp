/*Função: Programa 13
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, peso1 = 0, peso2 = 0, peso3 = 0, peso4 = 0, media = 0, somaP = 0;
	setlocale(LC_ALL, "");
	printf ("Insira a primeira nota \n");
	scanf ("%f", &nota1);
	printf ("Insira a segunda nota \n");
	scanf ("%f", &nota2);
	printf ("Insira a terceira nota \n");
	scanf ("%f", &nota3);
	printf ("Insira a quarta nota \n");
	scanf ("%f", &nota4);
	printf ("Insira o primeiro peso \n");
	scanf ("%f", &peso1);
	printf ("Insira o segundo peso \n");
	scanf ("%f", &peso2);
	printf ("Insira o terceiro peso \n");
	scanf ("%f", &peso3);
	printf ("Insira o quarto peso \n");
	scanf ("%f", &peso4);
	somaP = peso1 + peso2 + peso3 + peso4;
	media = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3)+(nota4*peso4)) / somaP;
	printf("A média destes valores é: %f \n", media);
	system("pause");
}
