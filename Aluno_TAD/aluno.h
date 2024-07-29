/*Arquivo cabeçalho para tipo abstrato de dados (TAD) Aluno*/
#include <stdio.h>
#include <stdlib.h>

/*Tipo exportado*/
typedef struct aluno Aluno;
/*Função que aloca dinamicamente uma struct aluno na memoria*/
Aluno *aloca_aluno(void);
/*Função para preencher uma struct aluno. A função recebe um endereço para aluno*/
void preenche(Aluno *aluno);
/*Função para imprimir uma struct Aluno. A função recebe um endereço para Aluno e imprime os dados*/
void imprime(Aluno *aluno);