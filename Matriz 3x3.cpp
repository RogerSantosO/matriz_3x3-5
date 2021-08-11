#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int lin, col;  /*as vari�veis de linha e coluna e a quantidade de termos da matriz foram declarados dentro da fun��o main*/
	int mat [3] [3];
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n\t=========================================================================\n");
	printf("\tSauda��es! Este � o criador de Matrizes."); 
	printf("\n\tEscreva o valor desejado em cada linha e coluna para formar a sua matriz\n"); /*mensagem de sauda��o ao usu�rio*/
	printf("\t=========================================================================\n\n");

	for (lin=0;lin<=2;lin++){ /*O comando "for()" foi usada para preencher cada espa�o da matriz que o usu�rio ir� criar */	
		printf("\n-------------------------------------------------------------\n");
		
		for (col=0;col<=2;col++){ /*Aqui o comando "for()" para as colunas se encontra dentro do comando "for()"para as linhas.
		Isso quer dizer que ap�s a leitura das colunas da primeira linha, o programa ir� para a linha seguinte e continuar� nesse ciclo at� que a meta de linhas seja alcan�ada*/	
			printf("Digite o elemento da linha %d e coluna %d da matriz:  ",lin+1,col+1);
			scanf("%d",&mat[lin][col]);  /*Os comandos ser�o repetidos pela estrutura "for()" para que o usu�rio preencha a matriz*/
		}
	}		
	
	printf("\n-------------------------------------------------------------\n");
	printf("\n\tMatriz\n");
	
	for (lin=0;lin<=2;lin++){ /*O programa imprime cada valor inserido pelo usu�rio na matriz */
		printf("\n\t");
		
		for (col=0;col<=2;col++){
			printf("%d\t",mat[lin][col]); /*A tabula��o e pulo das linhas foram utilizados para deixar os valores visualmente mais semelhantes a uma matriz*/
		}		
	}
	
	printf("\n\n\tMultiplicando a Matriz por 5, tem-se:\n\n");
	
	for (lin=0;lin<=2;lin++){
		printf("\n\t");
		
		for (col=0;col<=2;col++){
			printf("%d\t",mat[lin][col]*5); /*O programa imprime cada valor da matriz multiplicado por 5 */
		}		
	}
	printf("\n\n");
	
	system("pause");
	
	return 0;
}
