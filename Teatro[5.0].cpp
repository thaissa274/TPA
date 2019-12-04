/*
DESAFIO TEATRO
AUTOR: PABLO HENRIQUE VIEIRA DE NADAI
AUTORA: THAISSA DA SILVA FERRARI
AUTOR: CARLOS ALBERTO GON�ALVES DA SILVA NETO
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

/*
Informar o valor do ingresso e tamanho da sala (50x10), (10x50), (25x20), (20x25)
Abrir um espet�culo (com isso iremos zerar os espa�os e colocar todas as cadeiras dispon�veis)
Reservar ou cancelar a reserva de um lugar
Vender um lugar (inteira)
Vender um lugar (meia)
Verificar mapa do teatro
Encerrar o espet�culo
Verificar parciais
*/

int main (){
	int cod = 0, colunas = 0, cadeiras = 0, ingresso = 0, sair = 0, cod2 = 0, area = 0, x = 0, y = 0, vazia = 0, vendido = 0, reservado =0, l = 0, c = 0;
	float reserva = 0.0;
	char arq[500][500], resposta = ' ', abrir = ' ', show = ' ';
	setlocale (LC_ALL,"");
	printf("Para comer�armos, informe o valor do ingresso, em reais: \n");
		scanf("%i", &ingresso);
	printf("Informe quantas colunas tem o seu teatro: \n");
		scanf("%i", &colunas);
	printf("Informe quantas cadeiras tem em cada coluna no teatro: \n");
		scanf("%i", &cadeiras);
	while(colunas * cadeiras > 500){
		printf("\n\n O limite de assentos � de 500, por favor digite outro valor e reinicie o aplicativo \n");
	}
	//ARQUIBANCADA
	for (int l = 0; l < colunas; l++){
		for (int c = 0; c < cadeiras; c++){
			arq[c][l] = ' ';
		}
	}
	for(l=0; l<cadeiras; l++) { 
		for( c=0; c<colunas; c++) { 
			if(c==0){
				printf("   %c ", arq[c][l]); 
			}
			else{
				printf(" %c ", arq[c][l]);
			} 
			if(c<=colunas - 2) {
				printf("|");
			}
		} 
		if(l<cadeiras - 1){
			printf("\n\n"); 
		}
	}
	while(sair == 0){
		printf(" \n\n      Digite um desses valores para realizar a a��o:             \n\n");
		printf("+---------------------------------------------------------+\n");
		printf("|1. Abrir o espet�culo                                    |\n");
		printf("+---------------------------------------------------------+\n");
		printf("|2. Reservar ou cancelar reserva de assento               |\n");
		printf("+---------------------------------------------------------+\n");
		printf("|3. Vender uma entrada (inteira ou meia)                  |\n");
		printf("+---------------------------------------------------------+\n");
		printf("|4. Verificar o mapa da arquibancada                      |\n");
		printf("+---------------------------------------------------------+\n");
		printf("|5. Fechar o espet�culo                                   |\n");
		printf("+---------------------------------------------------------+\n");
		printf("|6. Verificar parciais                                    |\n");
		printf("+---------------------------------------------------------+\n");
		printf("|7. Sair do programa                                      |\n");
		printf("+---------------------------------------------------------+\n\n");
		//D = Desocupado
		//V = Vendido
		//R = Reservado
		printf("Escolha a a��o que voc� deseja realizar conforme a tabela: \n");
		scanf("%i", &cod);
		switch(cod){
			case 1:
				printf("\nOs espa�os ser�o zerados e todas os assentos se tornar�o dispon�veis\n");
				printf("\nTem certeza que deseja realizar essa a��o? (S/N)\n");
				scanf("%s", &abrir);
				if(abrir == 'S'){
					for(int l=0; l<cadeiras; l++) { 
						for(int c=0; c<colunas; c++){ 
								arq[c][l] = 'D';
						}
					}
				}
				if(abrir == 'N'){
					sair = 0;
				}
			break;
			case 2:
				printf("Quer reservar um assento? (S/N)\nAs reservas custam 60%% do valor integral do ingresso (R$%i,00)", ingresso);
					reserva = 0.6 * ingresso;
				printf("\nSua reserva custa: R$%2.f,00\n", reserva);
					scanf("%s", &resposta);
				if(resposta == 'S'){
					printf("\nMapa do seu teatro:\n");
					//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for(c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}
					printf("\nEscolha a coluna em que deseja fazer a reserva:\n");
					scanf("%i", &x);
					printf("\nEscolha a linha em que deseja fazer a reserva:\n");
					scanf("%i", &y);
					x--;
					y--;
					arq[x][y] = 'R';
					//ARQUIBANCADA
					for(int l=0; l<cadeiras; l++) { 
						for(int c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}					
				}
				
				else if (resposta == 'N'){
					printf("\nRetornando ao menu de a��es...\n");
					sair = 0;
				}
			break;
			case 3:
				printf("\nVoc� quer comprar um ingresso? (S/N)\n");
				scanf("%s", &resposta);
				if(resposta == 'S'){
					printf("\nVoc� �:\n");
					printf("+-----------------------+\n");
					printf("|1. Idoso               |\n");
					printf("+-----------------------+\n");
					printf("|2. Crian�a             |\n");
					printf("+-----------------------+\n");
					printf("|3. Professor/Estudante |\n");
					printf("+-----------------------+\n");
					printf("|4. Adulto              |\n");
					printf("+-----------------------+\n\n");
					printf("Selecione o n�mero correspondente a sua escolha: \n");
					scanf("%i", &cod2);
					switch(cod2){
						case 1:
							printf("\nO custo do seu ingresso � metade do valor integral: %i\n", ingresso);
							printf("Realizar compra?\n");
							if(resposta == 'S'){
							ingresso = ingresso / 2;
							//ARQUIBANCADA
						for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}
							printf("\nInsira a coluna desejada:\n");
							scanf("%i", &x);
							printf("\nInsira a linha desejada:\n");
							scanf("%i", &y);
							x--;
							y--;
							arq[x][y] = 'V';
							//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}							
							printf("\nCompra realizada!\n");
							sair == 0;	
							}
							else{
								sair == 0;
							}
						break;
						case 2:
							printf("\nO custo do seu ingresso � metade do valor integral: %i\n", ingresso);
							if(resposta == 'S'){
							ingresso = ingresso / 2;
							//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}							
							printf("\nInsira a coluna desejada:\n");
							scanf("%i", &x);
							printf("\nInsira a linha desejada:\n");
							scanf("%i", &y);
							x--;
							y--;
							arq[x][y] = 'V';
							//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}							
							printf("\nCompra realizada!\n");
							sair == 0;	
							}
							else{
								sair == 0;
							}
						break;
						case 3:
							printf("\nO custo do seu ingresso � metade do valor integral: %i\n", ingresso);
							if(resposta == 'S'){
							ingresso = ingresso / 2;
							//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}							
							printf("\nInsira a coluna desejada:\n");
							scanf("%i", &x);
							printf("\nInsira a linha desejada:\n");
							scanf("%i", &y);
							x--;
							y--;
							arq[x][y] = 'V';
							//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}							
							printf("\nCompra realizada!\n");
							sair == 0;
							}
							else{
								sair == 0;
							}
						break;
						case 4:
							printf("\nO custo do seu ingresso � o valor integral: %i\n", ingresso);
							if(resposta == 'S'){
							//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}							
							printf("\nInsira a coluna desejada:\n");
							scanf("%i", &x);
							printf("\nInsira a linha desejada:\n");
							scanf("%i", &y);
							x--;
							y--;
							arq[x][y] = 'V';
							//ARQUIBANCADA
					for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}							
							printf("\nCompra realizada!\n");
							sair == 0;	
							}
							else{
								sair == 0;
							}
						break;
						default:
							printf("\nN�mero incorrespondente, selecione outro\n");
						break;
					}
			case 4:
				for(l=0; l<cadeiras; l++) { 
						for( c=0; c<colunas; c++) { 
				    		if(c==0){
								printf("   %c ", arq[c][l]); 
							}
				    		else{
				    			printf(" %c ", arq[c][l]);
							} 
				    	if(c<=colunas - 2) {
							printf("|");
						}
				    	} 
				  		if(l<cadeiras - 1){
						  printf("\n\n"); 
						  }
					}
				break;
				case 5:
				area = colunas * cadeiras;
				if(ingresso <= area * 0.6){
				printf("\n+-----------------------------------------+\n");
				printf("|     Seu show vai come�ar, aproveite!    |\n");
				printf("+-----------------------------------------+\n");
				}
				else if(ingresso >= area * 0.6){
				printf("\nSeu show s� pode iniciar com 60%% dos lugares preenchidos, deseja continuar a venda ou fechar o show? (C/F)\n");
				scanf("%s", &show);
					if(show == 'C'){
					sair == 0;
					}
					else if(show == 'F'){
					sair == 1;	
					}				
				}
				break;
				case 6:
					printf("FUNCIONOU\n\n\n");
					for(l=0; l<cadeiras; l++) { 
						for(c=0; c<colunas; c++){
							if(arq[c][l] == 'D'){
								vazia++;
							}else if(arq[c][l] == 'R'){
								reservado++;
							}else{
								vendido++;
							}
						}
					} 
					
						printf("H� %i cadeiras vazias\n", vazia);
						printf("H� %i cadeiras reservadas\n", reservado);
						printf("H� %i cadeiras vendidas\n", vendido);
				break;
				}
				case 7:
				printf("O programa foi encerrado");
				system("pause");
				break;
				default:
					printf("Insira um valor v�lido\n");
				break;
		}
	}
}
