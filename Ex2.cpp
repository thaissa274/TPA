/*Função: Programa 2
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	float area = 0, base = 0, altura =0;
	setlocale(LC_ALL,"");
	printf("Insira a base do seu triângulo: \n");
	scanf("%f", &base);
	printf("Insira a altura do seu triângulo: \n");
	scanf("%f", &altura);
	area = (base * altura)/2;
	printf("A área do seu triângulo é: %f \n ", area);
	system("pause");
}
