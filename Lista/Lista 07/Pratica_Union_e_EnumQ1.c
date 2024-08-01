#include<stdio.h>
#include<stdlib.h>

typedef enum genero{
    MASCULINO,
    FEMENINO
}Genero;

typedef struct pessoa
{
    char nome[20];
    int idade;
    Genero sexo;
}Pessoa;


int main(){

    Pessoa humano;
    int genero;

    printf("Informe os dados da pessoa\n");
    printf("Nome:\t");
    scanf(" %[^\n]", humano.nome);
    printf("Idade:\t");
    scanf("%d",&humano.idade);
    printf("Genero (0-Masculino, 1-Femenino):\t");
    scanf("%d", &genero);

    printf("Os dados informados foram:\n");
    printf("%s\n", humano.nome);
    printf("%d\n", humano.idade);
    
    switch (genero)
    {
    case MASCULINO:
        printf("Masculino");
        break;
    case FEMENINO:
        printf("Femenino");
        break;
    default:
        break;
    }
    

    return 0;
}