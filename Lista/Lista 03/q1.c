#include<stdio.h>
#include<stdlib.h>

/*Entrada: Tamanho do vetor
            Elementos do vetor
- alocar dinâmicamente vetor
- obter vetor inverso
Saída: vetor na ordem inversa*/

int main(void){
    int tamanho;
    printf("informe o tamanho do vetor: \t");
    scanf("%d", &tamanho);
    int*vetor=(int*)malloc(tamanho*sizeof(int));
    if(vetor==NULL){
        printf("No memory");
        exit(1);
    }
    else{
        printf("Vetor alocado com sucesso!");
    }
    //Elementos do vetor

    printf("Digitar os elementos do vetor: \n");
    for(int count=0; count<tamanho; count++){
        scanf("%d", &vetor[count]);
    }
    //Imprime vetor inverso
    int count;
    printf("Vetor inverso: \n");
    for(count=tamanho-1;count>=0;count--){
        printf("%d \t", vetor[count]);
    }
    return 0;
}