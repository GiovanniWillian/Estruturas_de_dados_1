/*Fazer um programa para corrigir provas de multipla escolha

-Entrada: numero de questoes, gabarito.

Ler respostas de 10 alunos matriculados
OBS: Cada questao vale 10/numero de questoes.

-Saida: A nota obtida para cada aluno, a porcentagem de aprovacao.
OBS: Nota minima para aprovacao e 6.
*/

#include <stdio.h>
#include <stdlib.h>

#define ALUNOS 10

int main()
{
    int num_questoes, i, j;
    float aprovado=0;
    double *nota;

    printf("Informe o numero de questoes.\n");
    scanf("%d", &num_questoes);

    char gabarito[num_questoes];

    // Preenche o gabarito com as respostas corretas
    for (i = 0; i < num_questoes; i++)
    {
        printf("preencha a questao %d do gabarito\n", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    // Aloca memoria para as respostas dos alunos
    char **resposta = (char **)malloc(ALUNOS * sizeof(char *));
    if (resposta == NULL)
    {
        printf("Falha ao alocar memoria\n");
        exit(1);
    }

    for (i = 0; i < ALUNOS; i++)
    {
        resposta[i] = (char *)malloc(num_questoes * sizeof(char));
        if (resposta[i] == NULL)
        {
            printf("Falha ao alocar memoria\n");
            exit(1);
        }
    }

    nota = (double *)calloc(ALUNOS, sizeof(double));
    if (nota == NULL)
    {
        printf("ERRO DESCONHECIDO\n");
        exit(1);
    }

    printf("Informe as respostas dos alunos.\n");

    for (i = 0; i < ALUNOS; i++)
    {
        printf("Informe as respostas do aluno %d.\n", i + 1);
        for (j = 0; j < num_questoes; j++)
        {
            printf("resposta %d:\t", j + 1);
            scanf(" %c", &resposta[i][j]);
        }
    }

    // Calculo de notas
    for (i = 0; i < ALUNOS; i++)
    {
        for (j = 0; j < num_questoes; j++)
        {
            if (resposta[i][j] == gabarito[j])
            {
                nota[i] += 1.0;
            }
        }
        nota[i] = nota[i] / num_questoes * 10;
        printf("A nota do aluno %d e: %.2lf\n", i + 1, nota[i]);
        if (nota[i]>=6)
        {
            aprovado=aprovado+1.0;
        }
        
    }

    printf("A porcentagem de aprovacao de alunos e: %.2f%%\n",(aprovado*100)/ALUNOS);

    return 0;
}