#include<stdio.h>

struct aluno
{
    int mat,idade;
    char nome[20];
};

void captura(struct aluno *aluno1){
    printf("Digite a idade e mat\n");
    scanf("%d %d", &aluno1->idade, &aluno1->mat);
    printf("Digite o nome\n");
    scanf(" %[^\n]", &aluno1->nome);
}

void imprime(struct aluno*aluno1){
    printf("A idade e a matricula sao:\n %d %d\n", aluno1->idade,aluno1->mat);
    printf("O nome e: %s\t", aluno1->nome);
}

int main(){
    struct aluno aluno1;
    
    captura(&aluno1);
    imprime(&aluno1);
    return 0;
}
