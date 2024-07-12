#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Armazenar nomes e idades de varias pessoas
Entrada:
    Numero de pessoas
    Nome completo e idade de cada pessoa
Saida:
    Nomes armazenados
-Alocar os nomes dinamicamente em uma matriz*/

int main(void){
    int pessoas;
    int cont;
    printf("Informe quantas pessoas o programa deve armazenar.\n");
    scanf("%d", &pessoas);
    getchar();

    //Cria matriz que aloca os nomes
    char**matriz=(char**)malloc(pessoas*sizeof(char*));
        if (matriz==NULL)
        {
            printf("Erro na memoria");
            exit(1);
        }
        for(cont=0;cont<pessoas;cont++){
            matriz[cont]=(char*)malloc(100*sizeof(char));
            if (matriz[cont]==NULL)
            {
                printf("Erro na memoria");
                exit(1);
            }
        
        }
    //Armazena nomes
    printf("Informe os nomes\n");
    for(cont=0;cont<pessoas;cont++){
        printf("Pessoa %d: ", cont + 1);
        fgets(matriz[cont], 100, stdin);
    }

    //Cria vetor dinamico que aloca idades
    int*idades=(int*)malloc(pessoas*sizeof(int));
    if (idades==NULL)
        {
            printf("Erro na memoria");
            exit(1);
        }
    //Armazena idades
    printf("Informe as idades\n");
    for(cont=0;cont<pessoas;cont++){
        printf("Idade da pessoa %d: ", cont + 1);
        scanf("%d", &idades[cont]);
        getchar();
    }

    //Exibe nomes armazenados
    printf("Os nomes informados sao:\n");
    for(cont=0;cont<pessoas;cont++){
        printf("%s\n", matriz[cont]);
    }
    

    free(idades);
    for(cont=0;cont<pessoas;cont++){
        free(matriz[cont]);
    }

    free(matriz);

    return 0;
}