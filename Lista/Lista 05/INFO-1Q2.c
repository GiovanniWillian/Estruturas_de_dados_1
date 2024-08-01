#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa
{
    char nome_pessoa[20];
    int num_documento;
    int idade;
}Pessoa;

void preenche_pessoa(Pessoa * pessoa, int quant_pessoa){
    int count;
    
    for(count=0; count<quant_pessoa; count++){
        printf("Informe o nome da pessoa %d:\t", count+1);
        scanf(" %[^\n]", pessoa[count].nome_pessoa);

        printf("Informe o numero do documeto da pessoa %d:\t", count+1);
        scanf("%d", &pessoa[count].num_documento);

        printf("Informe a idade da pessoa %d:\t", count+1);
        scanf("%d", &pessoa[count].idade);
}
}

void imprime_pessoa(Pessoa * pessoa, int quant_pessoa){
    int count;
    
    for(count=0; count<quant_pessoa; count++){
        printf("O nome da pessoa %d e: %s\n", count+1, pessoa[count].nome_pessoa);

        printf("O numero do documento da pessoa %d e: %d\n", count+1, pessoa[count].num_documento);

        printf("A idade da pessoa %d e: %d\n",count+1, pessoa[count].idade);
}
}

void atualiza_idade(Pessoa * pessoa, int quant_pessoa){
    int count;
    char nome[20];
    int nova_idade;

    printf("Informe o nome da pessoa que deseja alterar a idade:\t");
    scanf(" %[^\n]", nome);

    for (count = 0; count < quant_pessoa; count++)
    {
        if (strcmp(nome, pessoa[count].nome_pessoa) ==0)
        {
            printf("Informe a nova idade da pessoa:\t");
            scanf("%d", &nova_idade);

             pessoa[count].idade=nova_idade;
        }
        
    }
    

}

void compara_idade(Pessoa * pessoa, int quant_pessoa){
    int count;

    Pessoa* menor_idade;
    Pessoa* maior_idade;

    menor_idade=&pessoa[0];
    maior_idade=&pessoa[0];

    for (count = 0; count < quant_pessoa; count++)
    {
        if (pessoa[count].idade < menor_idade->idade)
        {
            menor_idade=&pessoa[count];
        }

        if (pessoa[count].idade > maior_idade->idade)
        {
            maior_idade=&pessoa[count];
        }
        
    }
    
    printf("A pessoa com a menor idade e: %s\n", menor_idade->nome_pessoa);
    printf("A pessoa com a maior idade e: %s\n", maior_idade->nome_pessoa);
}

int main(){
    int quant_pessoas;
    
    printf("Informe a quantidade de pessoas a ser inserida no programa.\n");
    scanf("%d", &quant_pessoas);

    Pessoa * pessoa1=(Pessoa*)malloc(quant_pessoas*sizeof(Pessoa));
    if (pessoa1==NULL)
    {
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    
    preenche_pessoa(pessoa1,quant_pessoas);

    imprime_pessoa(pessoa1, quant_pessoas);

    atualiza_idade(pessoa1, quant_pessoas);

    compara_idade(pessoa1, quant_pessoas);

    free(pessoa1);

    return 0;
}