/*Fun��o: Programa 2
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	float area = 0, base = 0, altura =0;
	setlocale(LC_ALL,"");
	printf("Insira a base do seu tri�ngulo: \n");
	scanf("%f", &base);
	printf("Insira a altura do seu tri�ngulo: \n");
	scanf("%f", &altura);
	area = (base * altura)/2;
	printf("A �rea do seu tri�ngulo �: %f \n ", area);
	system("pause");
}
