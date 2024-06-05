#include<stdio.h>
#include<stdlib.h>
    //exemplo:mudando o tamanho do vetor

    int main(){
        int tamanho, novo_tamanho;
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &tamanho);
        int * vetor = (int*)calloc(tamanho,sizeof(int));
if (vetor==NULL)
{
    printf("Falha!");
    exit(1);
}


        printf("\nDigite um novo tamanho: ");
        scanf("%d", &novo_tamanho);
        vetor = (int*) realloc(vetor, novo_tamanho*sizeof(int));
        if (vetor==NULL)
{
    printf("Falha!");
    exit(1);
}

free(vetor);
        return 0;
    }
