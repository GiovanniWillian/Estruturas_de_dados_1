#include<stdio.h>
#include<stdlib.h>

float * cria_vetor(int tamanho){
    float*vetor=(float*)malloc(tamanho*sizeof(float));
    if(vetor==NULL){
        exit(1);
    }
    return vetor;
}

void ler_vetor(float * vetor, int tamanho){
printf("Informe os valores do vetor");
int index;
for(index = 0; index<tamanho; index++){
    scanf("%f", &vetor[index]);
    }
}

void imprimir_vetor(float*vetor, int tamanho){
    printf("Os valores são:\n");
    int index;
    for (index = 0; index < tamanho; index++)
    {
        printf("%f\n", vetor[index]);
    }
    
}

int main(){
    int tamanho;
    float*vetor=cria_vetor(5);

    ler_vetor(vetor2,5);
    imprimir_vetor(vetor2,5);
    free(vetor2);

    return 0;
}
