#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ler_resposta(char ** genero, char ** opiniao, int quant_pessoas);
void imprime_porcentagem(char ** genero, char ** opiniao, int quant_pessoas);

int main(){
    int qnt_pessoas;

    printf("Digite a quantidade de pessoas que respondeu o questionario\n");
    scanf("%d", &qnt_pessoas);
    getchar();
    
    char ** genero=(char**)malloc(qnt_pessoas*sizeof(char*));
    char ** opiniao=(char**)malloc(qnt_pessoas*sizeof(char*));
    if (genero == NULL || opiniao == NULL)
    {
        printf("Erro de alocacao de memoria.\n");
        exit(1);
    }

    ler_resposta(genero, opiniao, qnt_pessoas);
    
    imprime_porcentagem(genero, opiniao, qnt_pessoas);

    for (int i = 0; i < qnt_pessoas; i++) {
        free(genero[i]);
        free(opiniao[i]);
    }
    free(genero);
    free(opiniao);



    return 0;
}

void ler_resposta(char ** genero, char ** opiniao, int quant_pessoas){
    int count;

    for (count = 0; count < quant_pessoas; count++)
    {   
        genero[count]=(char*)malloc(2*sizeof(char));
        opiniao[count] = (char*)malloc(50 * sizeof(char));
        if (genero[count]==NULL || opiniao[count]==NULL)
        {
            printf("Erro na alocacao de memoria\n");
            exit(1);
        }
        
        
        printf("Informe o genero e a opiniao da pessoa %d.\n", count+1);

        printf("Genero (M/F):\t");
        scanf(" %[^\n]", genero[count]);
        getchar();

        printf("Opiniao (gostou/nao gostou):\t");
        scanf(" %[^\n]", opiniao[count]);

    }

}

void imprime_porcentagem(char ** genero, char ** opiniao, int quant_pessoas){
    int count;

    int quant_fg=0;

    int count_F=0;

    int quant_mn=0;

    int count_M=0;


    for (count = 0;count < quant_pessoas; count++)
    {   
        if (*genero[count]=='F')
        {
            count_F++;
        }
        if (*genero[count]=='M')
        {
            count_M++;
        }
        
        
        
        if (*genero[count]=='F' && strcmp(opiniao[count], "gostou")==0)
        {
            quant_fg++;
        }
        
        if (*genero[count]=='M' && strcmp(opiniao[count], "nao gostou")==0)
        {
            quant_mn++;
        }
        
    }
    
    printf("A quantidade de mulheres que gostou e de: %.2f%%\n", (float)(quant_fg*100)/count_F);
    printf("A quantidade de homens que nao gostou e de: %.2f%%", (float)(quant_mn*100)/count_M);

}