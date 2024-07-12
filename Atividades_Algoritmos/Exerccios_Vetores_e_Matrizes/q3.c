#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Entrada: numero inteiro positivo n
//-Aloque dinamicamente uma matriz de ordem n
//-Preencha a matriz com numeros aleatorios de 1 a 100
//-Exiba a matriz

int main(void){
    int n;
    printf("Informe a ordem da matriz\n");
    scanf("%d", &n);

    //Alocação de memoria
    int **matriz=(int**)malloc(n*sizeof(int*));
    if(matriz==NULL){
        exit(1);
    }
    int count;
    for(count=0;count<n;count++){
        matriz[count]=(int*)malloc(n*sizeof(int));
        if(matriz[count]==NULL){
            exit(1);
        }
    }

    //Preencher matriz
    int j;
    for(count=0;count<n;count++){
        for(j=0;j<n;j++){
            matriz[count][j]= rand() % 100;
        }
    }

    //Exibir matriz
    printf("A matriz é\n");
    for(count=0; count<n; count++){
        printf("\n");
        for(j =0; j<n; j++){
            printf("%d\t", matriz[count][j]);
        }
    }
    

    return 0;
}