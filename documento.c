/*union:
- São usadas quando queremos armazenar valores
heterogêneos em um mesmo espaço de memória;
- Os parametros compartilham o mesmo espaço de memória;
- Só podemos armazenar um parametro por vez;
*/

#include<stdio.h>
#include<stdlib.h>
/*Exemplo: Como usar Union e Struct*/
typedef union documentos
{
    char cpf[11]; // Formato 00.000.000-00
    long int RG; // Apenas numeros inteiros 00111000111
}Documentos;

typedef struct pessoa{
    char nome[20]; // Para guardar o nome completo da pessoa
    Documentos documento; // Para guardar o CPF ou RG
}Pessoa;

void preenche_pessoa(Pessoa* pessoa1, int * opcao_documento){
    /*Função para preencher struct pessoa*/
    printf("Informe o nome:\t");
    scanf(" %[^\n]", pessoa1->nome);
    printf("Informe o 1- CPF ou 2- RG: \t");
    scanf("%d", opcao_documento);
    switch (*opcao_documento)
    {
    case 1:
        scanf(" %[^\n]", pessoa1->documento.cpf);
        break;
    case 2:
        scanf("%ld", &pessoa1->documento.RG);
        break;
    default:
        printf("Valor invalido!!\n");
        break;
    }
}

void imprime_pessoa(Pessoa *pessoa1, int *opcao_documento){
    if (*opcao_documento==1)
    {
        printf("Nome: %s\nDocumentos:%s\n", pessoa1->nome,pessoa1->documento.cpf);
    }
    else if (*opcao_documento==2)
    {
        printf("Nome: %s\nDocumentos:%ld\n", pessoa1->nome,pessoa1->documento.RG);
    }
    
    
}

int main(){
    Pessoa pessoa;
    int opcao_documento;
    preenche_pessoa(&pessoa, &opcao_documento);
    imprime_pessoa(&pessoa, &opcao_documento);

    return 0;
}