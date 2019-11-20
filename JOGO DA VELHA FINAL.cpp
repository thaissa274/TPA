/*
Função: Jogo da Velha
Carlos Alberto Gonçalves da Silva Neto, Thaissa da Silva Ferrari, Pablo Henrique Vieira de Nadai
Data de Criação: 2019/10/23
Data de Finalização:

Criar um modo para iniciar e sair do jogo; Feito
Criar um modo para os jogadores colocarem seus nomes; Feito
Criar um modo para os jogadores escolherem X ou O; Mudança 
	[O jogador 1 sempre será o 'X' e o 2 será a 'O' no primeiro jogo. Nas próximas rodadas o vencedor será o 'X' (O 'X' sempre começa)]; Feito
Criar um modo para o jogo em si;
Criar um modo para declarar vitória a partir da 5º jogada;
Criar um modo para declarar velha;
Criar um modo para caso falhas;
Criar um modo para jogar novamente ou finalizar;
Criar um modo para exibir o placar caso finalize;
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int jogo = 2, start = 4, l = 0, c = 0, p1 = 0, p2 = 0, totalp1 = 0, totalp2 = 0, jogada = 0, cod3 = 0, ganhou = 0;
	char velha[3][3], jogador1[30], jogador2[30], sim1 = ' ', sim2 = ' ';
    setlocale (LC_ALL,"");
    printf("Se você quiser jogar digite 1, senão digite 0 \n");
    scanf("%i", &jogo);
//PEDIR NOME E INFORMAR O SIMBOLO//
			fflush(stdin);
	    	printf("O jogo vai começar \n");
	    	printf("Insira o nome do jogador 1: \n");
			gets(jogador1);
			printf("Insira o nome do jogador 2: \n");
			gets(jogador2);
	while(jogo != 0){
			if (jogo == 1){
				while (jogo !=1 && jogo !=2){
					printf("Valor Incorreto \n");
					scanf("%i", &jogo);
				}
				//COLOCAR AS POSIÇÕES COMO VAZIAS//
	 			for (l = 0; l < 3; l++){
	 				for (c = 0; c < 3; c++){
	 					velha[l][c] = ' ';
	 				}
	 			}
				//COLOCAR OS SIMBOLOS NO TABULEIRO
				while(jogada<9){	
				jogada = jogada + 1;
				 	//TABULEIRO//			 
					//criar o tabuleiro//
					
				printf("     C1  C2  C3\n\n");
				for(l=0; l<3; l++) { 
				   if(l==0) printf("X1"); 
				   if(l==1) printf("X2");
				   if(l==2) printf("X3"); 
				   for(c=0; c<3; c++) { 
				      if(c==0) printf("   %c ", velha[l][c]); 
				      else printf(" %c ", velha[l][c]);
				      if(c<2) printf("|");
				      } 
				   if(l<2) printf("\n    -----------\n"); 
				} 
			   	printf("\n\n"); 
				 
				//TABULEIRO//
				
	 			if(jogada % 2 != 0){ //Verficar se é o jogador 1 ou 2//
					printf("Vez do jogador 1, \nEscolha uma linha:\n");
					scanf("%i", &l);
					printf("Agora insira a coluna desejada:\n");
					scanf("%i", &c);
					if(velha[l][c] != ' '){ 
						printf("A posição desejada já está preenchida, por favor, selecione outra!\n");
						printf("Insira a posição da linha desejada: \n");
						scanf("%i", &l);
						printf("Insira a posição da coluna desejada: \n");
						scanf("%i", &c);
						velha[l][c] = 'X';
					}
					velha[l][c] = 'X';
	 			}
	      		if(jogada % 2 == 0){ //Verficar se é o jogador 1 ou 2//
		      		printf("Vez do jogador 2, \nEscolha uma linha:\n");
					scanf("%i", &l);
					printf("Agora insira a coluna desejada:\n");
					scanf("%i", &c);
	 				if (velha[l][c] != ' '){
						printf("A posição desejada já está preenchida, por favor, selecione outra!\n");
						printf("Insira a posição da linha desejada: \n");
						scanf("%i", &l);
						printf("Insira a posição da coluna desejada: \n");
						scanf("%i", &c);
						velha[l][c] = 'O';
					}
					velha[l][c] = 'O';
	 			}
			
	//PONTOS//
	
				if(velha[0][0] != ' ' && velha[0][0] == 'X' && velha[0][1] == 'X' && velha[0][0] == 'X' && velha[0][2] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				else if(velha[0][0] != ' ' && velha[0][0] == 'X' && velha[1][0] == 'X' && velha[2][0] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				else if(velha[0][1] != ' ' && velha[0][1] == 'X' && velha[1][1] == 'X' && velha[1][1] == 'X' && velha[2][1] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				else if(velha[0][2] != ' ' && velha[0][2] == 'X' && velha[1][2] == 'X' && velha[1][2] == 'X' && velha[2][2] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				else if(velha[1][0] != ' ' && velha[1][0]  == 'X' && velha[1][1] == 'X' && velha[1][1] == 'X' && velha[1][2] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				else if(velha[2][0] != ' ' && velha[2][0] == 'X' && velha[2][1] == 'X' && velha[2][1] == 'X' && velha[2][2] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				else if(velha[0][0] != ' ' && velha[0][0] == 'X' && velha[1][1] == 'X' && velha[1][1] == 'X' && velha[2][2] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				else if(velha[0][2] != ' ' && velha[0][2] == 'X' && velha[1][1] == 'X' && velha[1][1] == 'X' && velha[2][0] == 'X'){
					printf("Jogador 1 ganhou um ponto\n");
					totalp1 = p1 + 1;
					break;
				}
				//BOLINHA//
				else if( velha[0][0] != ' ' && velha[0][0] == 'O' && velha[0][1] == 'O'  && velha[0][0] == 'O' && velha[0][2] == 'O'){
					printf("Jogador 2 ganhou um ponto \n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[0][0] != ' ' && velha[0][0] == 'O' && velha[1][0] == 'O' && velha[1][0] == 'O' && velha[2][0] == 'O'){
					printf("Jogador 2 ganhou um ponto\n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[0][1] != ' ' && velha[0][1] == 'O' && velha[1][1] == 'O' && velha[1][1] == 'O'&& velha[2][1] == 'O'){
					printf("Jogador 2 ganhou um ponto\n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[0][2] != ' ' && velha[0][2] == 'O' && velha[1][2] == 'O' && velha[1][2] == 'O' && velha[2][2] == 'O'){
					printf("Jogador 2 ganhou um ponto\n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[1][0] != ' ' && velha[1][0]  == 'O' && velha[1][1] == 'O' && velha[1][1] == 'O' && velha[1][2] == 'O'){
					printf("Jogador 2 ganhou um ponto\n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[2][0] != ' ' && velha[2][0] == 'O' && velha[2][1] == 'O' && velha[2][1] == 'O' && velha[2][2] == 'O'){
					printf("Jogador 2 ganhou um ponto\n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[0][0] != ' ' && velha[0][0] == 'O' && velha[1][1] == 'O' && velha[1][1] == 'O' && velha[2][2] == 'O'){
					printf("Jogador 2 ganhou um ponto\n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[0][2] != ' ' && velha[0][2] == 'O' && velha[1][1] == 'O' && velha[1][1] == 'O' && velha[2][0] == 'O'){
					printf("Jogador 2 ganhou um ponto\n");
					totalp2 = p2 + 1;
					break;
				}
				else if(velha[0][0] != ' ' && velha[0][1] != ' ' && velha[0][2] != ' ' && velha[1][0] != ' ' && velha[1][1] != ' ' && velha[1][2] != ' ' && velha[2][0] != ' ' && velha[2][1] != ' ' && velha[2][2] != ' '){
					printf("Deu velha \n");
					break;
				}
			}
	//PLACAR//
	
	 		printf("Digite 1 para jogar novamente\nE digite 0 para encerrar o jogo e exibiremos o placar \n");
	 		scanf("%i", &jogo);
	 		if(jogo == 0){
				if (totalp1 > totalp2){
					printf("%s \n", jogador1);
					printf("venceu o jogo com %i ", totalp1);
					printf("ponto(s) \n");
				}else if(totalp1 < totalp2){
					printf("%s \n", jogador2);
					printf("venceu o jogo com %i ", totalp2);
					printf("ponto(s) \n");
				}else if(totalp1 == totalp2){
					printf("Houve um empate entre ", &jogador1);
					printf("com %i", &totalp1);
					printf("pontos e", &jogador2);
					printf("com %i", &totalp2);
					printf("pontos \n");
				}
					printf("O jogo acabou \n");
			}else if(jogo == 1){
			 	printf("O jogo vai iniciar novamente \n");
			 	jogada = 0;
			}
		}	
	}
		system("pause");
	
}
