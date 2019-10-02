/*Função: Programa 6
Autora: Thaissa da Silva Ferrari
Data de Criação: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	float prestacao = 0, valor = 0, taxa = 0, tempo = 0;
	setlocale(LC_ALL,"");
	printf("Insira o valor total: \n");
	scanf("%f", &valor);
	printf("Insira uma taxa de atraso da sua prestação : \n");
	scanf("%f", &taxa);
	printf("Insira o tempo da prestacao: \n");
	scanf("%f", &tempo);
	prestacao = valor + (valor + (taxa/100) * tempo);
	printf("O valor da oferta é: %f \n", prestacao);
	system("pause");
}
