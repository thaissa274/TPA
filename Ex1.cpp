/*Fun��o: Programa 1
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	int area = 0, base = 0, altura =0;
	setlocale(LC_ALL,"");
	printf("Insira a base do seu ret�ngulo: \n");
	scanf("%i", &base);
	printf("Insira a altura do seu ret�ngulo: \n");
	scanf("%i", &altura);
	area = base * altura;
	printf("A �rea do seu ret�ngulo �: %i \n", area);
	system("pause");
}
