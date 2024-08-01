#include<stdio.h>
#include<string.h>

enum tipo{
    ALIMENTO,
    BEBIDA,
    ELETRONICO
};

typedef union tipo_produto{
    enum tipo Tipo;
}Tipo_Produto;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo_Produto tipo_produto;

}Produto;

int main(){
    Produto produto1;

    int tipo1;

    printf("Informe o nome do produto:\t");
    scanf(" %[^\n]", produto1.nome);
    printf("Informe o preco do produto:\t");
    scanf("%f", &produto1.preco);

    printf("Informe o tipo do produto (0-alimento, 1-bebida, 2-eletronico):\n");
    scanf("%d", &tipo1);

    if (tipo1 >= 0 && tipo1 <= 2) {
        produto1.tipo_produto.Tipo = (enum tipo)tipo1;
    } else {
        printf("Tipo inválido!\n");
    }

    

    printf("Os dados do produto sao:\n");
    printf("Nome:%s\n", produto1.nome);
    printf("Preco:%.2f\n", produto1.preco);
    
    switch (produto1.tipo_produto.Tipo)
    {
    case ALIMENTO:
            printf("Tipo: Alimento\n");
        break;
    case BEBIDA:
            printf("Tipo: Bebida\n");
        break;
    case ELETRONICO:
            printf("Tipo: Eletronico\n");
        break;
    default:
        printf("Tipo invalido");
        break;
    }



    return 0;
}