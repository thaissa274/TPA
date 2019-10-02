/*Função: Programa 1
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	int area = 0, base = 0, altura =0;
	setlocale(LC_ALL,"");
	printf("Insira a base do seu retângulo: \n");
	scanf("%i", &base);
	printf("Insira a altura do seu retângulo: \n");
	scanf("%i", &altura);
	area = base * altura;
	printf("A área do seu retângulo é: %i \n", area);
	system("pause");
}
