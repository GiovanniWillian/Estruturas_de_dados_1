#include "aluno.h"

struct aluno
{
    char nome[20];
    int idade;
    long int matricula;
};

Aluno *aloca_aluno(void)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("Erro de alocacao de memoria.\n");
        exit(1);
    }
}

void preenche(Aluno *aluno)
{
    printf("Informe o nome:\t");
    scanf(" %[^\n]", aluno->nome);
    printf("Informe idade e matricula:\t");
    scanf("%d %ld", &aluno->idade, &aluno->matricula);
}

void imprime(Aluno *aluno)
{
    printf("Nome:%s \t Idade:%d \t Matricula: %ld", aluno->nome, aluno->idade, aluno->matricula);
}