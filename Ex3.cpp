/*Função: Programa 3
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	float area = 0, raio = 0, PI = 3.1416;
	setlocale(LC_ALL,"");
	printf("Insira o raio do seu círculo: \n");
	scanf("%f", &raio);
	area = (raio * raio) * PI;
	printf("A área do círculo é: %f \n ", area);
	system("pause");
}
