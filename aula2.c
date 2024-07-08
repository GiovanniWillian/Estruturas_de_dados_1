//1º Considere que o endereço do elemento v[3] é 4800 e que v é do tipo inteiro, qual o endereço de expressão v+5?

//Resposta = 4808

//2º Faça uma função que retorna a quantidade de elementos positivos, negativos e iguais a zero que existem dentro
//de um vetor de inteiros.

#include<stdio.h>
#include<stdlib.h>

void retorno(int*vetor, int tam, int* quant_p, int* quant_n, int* quant_z);

int main(void){

    int positivo=0, negativo=0, zero=0;

    int tamanho;

    printf("Informe o tamanho\n");
    scanf("%d", &tamanho);

    int*vet=(int*)malloc(tamanho*sizeof(int));
    if(vet==NULL){
        exit(1);
    }

    printf("Informe os valores do vetor\n");
    int i;

    for(i=0;i<tamanho;i++){
        scanf("%d", &vet[i]);
    }


    retorno(vet,tamanho,&positivo,&negativo,&zero);

    free(vet);

    printf("A quantidade de positivos e: %d\n", positivo);
    printf("A quantidade de negativos e: %d\n", negativo);
    printf("A quantidade de numeros iguais a zero e: %d\n", zero);

    return 0;
}

void retorno(int*vetor, int tam, int* quant_p, int* quant_n, int* quant_z){

    int aux;

    for(aux=0; aux<tam; aux++){
        if(vetor[aux]>0){
            (*quant_p)++;
        }

        if(vetor[aux]==0){
            (*quant_z)++;
        }

        if(vetor[aux]<0){
            (*quant_n)++;
        }
    }


}