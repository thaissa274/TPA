/*Função: Programa 12
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int idadeDia = 0, anoNasc = 0, anoAtual, idadeAno;
	setlocale(LC_ALL, "");
	printf ("Insira o seu ano de nascimento: \n");
	scanf ("%i", &anoNasc);
	printf ("Insira o ano atual: \n");
	scanf ("%i", &anoAtual);
	idadeDia = anoAtual - anoNasc;
	idadeAno = idadeDia * 365;
	printf("A sua idade em dias é: %i \n", idadeDia);
	printf("A sua idade em anos é: %i \n", idadeAno);
	system("pause");
}
