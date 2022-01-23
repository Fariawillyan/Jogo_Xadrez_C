#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int opcao() { //função para mostrar as opções
	
	  printf("\t\tBEM VINDO AO TABULEIRO DE XADREZ\n");
	  printf("\n\n\t\tNumeros das pecas do tabuleiro!!!\n\n");
	  printf("\t[1]\t[2]\t[3]\t[4]\t[5]\t[6]\t[0]\n");
	  printf("\tPeoes |\tCavalos |Torres |Bispos |Reis |Rainhas |Vazio |\n\n");
	  printf("\n");
	  printf("[1] Inserir peca no tabuleiro | [2] Mostrar o tabuleiro | [3] Quantidade de peca	| [4] SAIR\n\n");
	
 };

 char xadrez[8][8] = { //posição das peças do xadrez em matriz
 { '3' , '2' , '4' , '6' , '5' , '4' , '2' , '3' },
 { '1' , '1' , '1' , '1' , '1' , '1' , '1' , '1' },
 { '0' , '0' , '0' , '0' , '0' , '0' , '0' , '0' },
 { '0' , '0' , '0' , '0' , '0' , '0' , '0' , '0' },
 { '0' , '0' , '0' , '0' , '0' , '0' , '0' , '0' },
 { '0' , '0' , '0' , '0' , '0' , '0' , '0' , '0' },
 { '1' , '1' , '1' , '1' , '1' , '1' , '1' , '1' },
 { '3' , '2' , '4' , '6' , '5' , '4' , '2' , '3' }

 };

 int pintarTelaTexto() {//função para operar o vetor na matriz

	int lin, col, r;
	for (lin = 0; lin < 8; lin++) {
		 for (r = 0; r < 3; r++) {
			 for (col = 0; col < 8; col++) {
				
				char peca = xadrez[lin][col];
				 char letra = ((lin + col) % 2 == 0) ? '\xB2' : ' ';
				 letra = (r == 1) ? peca : letra;
				 if ((lin + col) % 2 == 0) {
					 printf("\xB2\xB2%c\xB2\xB2", letra); // mostra o desenho do xadrez
					
				 }else {
					 printf(" %c ", letra);
					
				 }
				
			 }
			 printf("\n");
			
		 }
		
	}
	
 }

 int moverPeca(int linPosIni, int colPosIni, int linPosFin, int colPosFin) { // função para	 mover peça
	 xadrez[linPosFin][colPosFin] = xadrez[linPosIni][colPosIni];
	 xadrez[linPosIni][colPosIni] = ' ';
	
}

 int contador() {//função para mostrar as peças
	
	 printf("Peao = 8\n");
	 printf("Cavalo = 4\n");
	 printf("Torres = 4\n");
	 printf("Bispos = 4\n");
	 printf("Reis = 2\n");
	 printf("Rainhas = 2\n");
	 printf("Vazios = 32\n");
	
 }

 int main() {
	 opcao();// função do print
	
		 int escolha, linPosIni, linPosFin, colPosIni, colPosFin;
	
		 while (escolha <= 4) { //estrutura de repetição
			scanf_s("%d", &escolha);

			switch (escolha) { //fazer as escolhas do menu
			
			case 1:
				system("CLS");//limpa texto anterior
				pintarTelaTexto(); //fução para chamar as operaçoes
				printf("Informe a Linha e Coluna da posicao inicial: ");
				scanf_s("%d %d", &linPosIni, &colPosIni); // capturar entrada de dados pelo teclado
			
				printf("Informe a Linha e Coluna da posicao final: ");
				scanf_s("%d %d", &linPosFin, &colPosFin);
				moverPeca(linPosIni, colPosIni, linPosFin, colPosFin); //função para mover as peças
			 break;
			
			 case 2:
				pintarTelaTexto();
			 break;
			
			 case 3:
				 system("CLS");
				contador(); //contador de peças
			 break;
			
			 case 4:
			 default:
				printf("Jogo finalizado\n\n");
			 return 0;
			
		    }
			 printf("\n\n");
			 printf("[1] Inserir peca no tabuleiro | [2] Mostrar o tabuleiro | [3] Quantidade de peca| [4] SAIR\n\n");
		
			 
		 }
		 getch();
		system("pause");
	return 0;
	
 }