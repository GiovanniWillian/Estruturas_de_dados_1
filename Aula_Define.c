#include<stdio.h>
#include<stdlib.h>//Para usar a funcção malloc, exit

#define QUANTIDADE_ALUNOS 5 //Constante
typedef struct aluno
{
    int matricula;
    int idade;
    char nome[20];
}Aluno;

void preenche(Aluno*aluno, int tamanho){
    /*Função para preencher com dados do aluno*/
    int count;
    for(count=0;count<tamanho;count++){
        printf("Informe o nome: \t");
        scanf(" %[^\n]", aluno[count].nome);
        printf("Informe a matricula: \t");
        scanf("%d", &aluno[count].matricula);
        printf("Digite a idade: \t");
        scanf("%d", &aluno[count].idade);
    }
}

int main(){
    Aluno *aluno=(Aluno*)malloc(QUANTIDADE_ALUNOS*sizeof(Aluno));
    if (aluno==NULL)
    {
        printf("Falha na alocação de memoria");
        exit(1);
    }
    
    preenche(aluno, QUANTIDADE_ALUNOS);

    int novo_tamanho;
    printf("Informe o novo tamanho do vetor: \t");
    scanf("%d", &novo_tamanho);
    aluno =(Aluno*) realloc(aluno, novo_tamanho*sizeof(Aluno));
    if (aluno==NULL)
    {
        printf("Falha na alocação de memoria");
        exit(1);
    }
    else{
        printf("Vetor realocado!\n");
    }

    preenche(aluno, novo_tamanho);

    free(aluno);
    return 0;
}
