/*Fun��o: Programa 16
Autora: Thaissa da Silva Ferrari
Data de Cria��o: 02/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float base = 0, altura = 0, metroQ = 0, wf = 0;
	setlocale(LC_ALL, "");
	printf ("Indique a altura: \n");
		scanf ("%f", &altura);
	printf ("Indique a base: \n");
		scanf ("%f", &base);
	metroQ = altura * base;
	wf = metroQ * 18;
	printf("A �rea em metros quadrados �: %f  \n",metroQ);
	printf ("E a potencia de ilumina��o por watts que dever� ser utilizada �  ",wf);
	system("pause");
}

