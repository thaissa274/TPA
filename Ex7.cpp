/*Fun��o: Programa 7
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 02/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	float valor = 0, per = 0, resul =0;
	setlocale(LC_ALL,"");
	printf("Insira o seu sal�rio atual: \n");
	scanf("%f", &valor);
	printf("Insira o percentual de aumento do seu sal�rio: \n");
	scanf("%i", &per);
	resul = valor + (valor*(per/100));
	printf("O valor do seu salario ap�s o aumento foi de R$: %f %i \n", resul);
	system("pause");
}
