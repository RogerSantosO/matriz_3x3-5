#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int lin, col;  /*as variáveis de linha e coluna e a quantidade de termos da matriz foram declarados dentro da função main*/
	int mat [3] [3];
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n\t=========================================================================\n");
	printf("\tSaudações! Este é o criador de Matrizes."); 
	printf("\n\tEscreva o valor desejado em cada linha e coluna para formar a sua matriz\n"); /*mensagem de saudação ao usuário*/
	printf("\t=========================================================================\n\n");

	for (lin=0;lin<=2;lin++){ /*O comando "for()" foi usada para preencher cada espaço da matriz que o usuário irá criar */	
		printf("\n-------------------------------------------------------------\n");
		
		for (col=0;col<=2;col++){ /*Aqui o comando "for()" para as colunas se encontra dentro do comando "for()"para as linhas.
		Isso quer dizer que após a leitura das colunas da primeira linha, o programa irá para a linha seguinte e continuará nesse ciclo até que a meta de linhas seja alcançada*/	
			printf("Digite o elemento da linha %d e coluna %d da matriz:  ",lin+1,col+1);
			scanf("%d",&mat[lin][col]);  /*Os comandos serão repetidos pela estrutura "for()" para que o usuário preencha a matriz*/
		}
	}		
	
	printf("\n-------------------------------------------------------------\n");
	printf("\n\tMatriz\n");
	
	for (lin=0;lin<=2;lin++){ /*O programa imprime cada valor inserido pelo usuário na matriz */
		printf("\n\t");
		
		for (col=0;col<=2;col++){
			printf("%d\t",mat[lin][col]); /*A tabulação e pulo das linhas foram utilizados para deixar os valores visualmente mais semelhantes a uma matriz*/
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
