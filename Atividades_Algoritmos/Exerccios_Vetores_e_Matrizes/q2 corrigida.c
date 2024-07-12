#include<stdio.h>
#include<stdlib.h>

/*
Entrada:
    -Linhas e colunas(tamanho da matriz)
    -Os elementos da matriz(uma matriz)
Saida:
    -Imprimir/mostrar matriz original e transposta
    */

int main(){
    int linhas, colunas;
    printf("Informe a quantidade de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);
    // alocação dinamica da matriz
    int**matriz=(int**) malloc(linhas*sizeof(int*));
    if(matriz==NULL){
        exit(1);
    }
    int count;
    for(count=0; count<linhas; count++){
        matriz[count] = (int*) malloc(colunas*sizeof(int));
        if(matriz[count]==NULL){
            exit(1);
        }
    }

    //Ler elementos da matriz
    int linha;
    int coluna;
    printf("Informe os elementos: \n");
    for(linha=0; linha<linhas; linha++){
        for(coluna=0; coluna<colunas; coluna++){
        scanf("%d", &matriz[linha][coluna]);
        }
    }
    //Imprimir matriz
    for(linha=0; linha<linhas; linha++){
        printf("\n");
        for(coluna =0; coluna<colunas; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        }
    }
    printf("\n");
    //Imprimir transposta
    for(linha=0; linha<linhas; linha++){
        printf("\n");
        for(coluna =0; coluna<colunas; coluna++){
            printf("%d\t", matriz[coluna][linha]);
        }
    }

    //Liberar matriz da memoria
    for(linha=0;linha<linhas;linha++){
        free(matriz[linha]);
    }
    free(matriz);
    return 0;
}