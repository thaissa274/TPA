/*
Fun��o: Programa 22
Autora: Thaissa da Silva Ferrari1
Data de Cria��o: 27/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include <locale.h>

int main(){
	int n1 = 0, n2 = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira o valor do primeiro n�mero: \n");
	scanf("%i", &n1);
	printf("Insira p valor do segundo n�mero: \n");
	scanf("%i", &n2);
	if(n1 > n2){
		printf("O maior valor �: %i \n", n1);
	}else if(n2 < n1){
		printf("O maior n�mero �: %i \n", n2);
	}else{
		printf("Ambos os n�meros s�o iguais \n");
	}
	system("pause");
	
}
