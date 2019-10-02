/*Função: Programa 4
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	int valor1 = 0, valor2 = 0, valor3 =0, soma = 0, quadrado = 0;
	setlocale(LC_ALL,"");
	printf("Insira o primeiro  valor: \n");
	scanf("%i", &valor1);
	printf("Insira o segundo  valor: \n");
	scanf("%i", &valor2);
	printf("Insira o terceiro  valor: \n");
	scanf("%i", &valor3);
	soma = valor1 + valor2 + valor3;
	quadrado = soma * soma;
	printf("A soma dos três números é: %i \n", soma);
	printf("O quadrado da soma de três números é: %i \n", quadrado);
	system("pause");
}
