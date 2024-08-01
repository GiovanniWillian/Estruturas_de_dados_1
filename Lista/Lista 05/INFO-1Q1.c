#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];

}Funcionario;
//Preenche a struct com valores fornecidos pelo usuario
void preenche(Funcionario*funcionario1, int quant_funcionarios);
//Imprime os valores armazenados na struct
void imprime(Funcionario*funcionario1);
//Altera o salario do funcionario
void altera_salario(Funcionario*funcionario1, float novo_salario);
//Informa o cargo e salario do funcionario com maior e menor salario 
void menor_maior(Funcionario*funcionario1, int quant_funcionario);

int main(){

    Funcionario* funcionario2;
    int quantidade_funcionarios;
    float novo_salario1=0;

    printf("Informe quantos funcionarios serao registrados");
    scanf("%d", &quantidade_funcionarios);

    funcionario2=(Funcionario*)malloc(quantidade_funcionarios*sizeof(Funcionario));
    if (funcionario2==NULL)
    {
        printf("Erro ao alocar memoria");
        exit(1);
    }
    

    preenche(funcionario2,quantidade_funcionarios);

    imprime(funcionario2);

    altera_salario(funcionario2, novo_salario1);

    menor_maior(funcionario2, quantidade_funcionarios);

    free(funcionario2);

    return 0;
}

void preenche(Funcionario*funcionario1, int quant_funcionarios){

    int cont;

    for(cont=0;cont<quant_funcionarios;cont++){

    printf("Informe o nome do funcionario: \t");
    scanf(" %[^\n]", funcionario1[cont].nome);
    printf("Informe o salario do funcionario: \t");
    scanf("%f", &funcionario1[cont].salario);
    printf("Informe o numero de identificacaoo do funcionario: \t");
    scanf("%d", &funcionario1[cont].identificador);
    printf("Informe o cargo do funcionario: \t");
    scanf(" %[^\n]", funcionario1[cont].cargo);
    }

}

void imprime(Funcionario*funcionario1){

    int i;
    printf("Escolha o funcionario que deseja imprimir (1,2,3...)\n");
    scanf("%d", &i);
    
    printf("O nome do funcionario e: %s\n", funcionario1[i-1].nome);
    printf("O salario do funcionario e: %f\n", funcionario1[i-1].salario);
    printf("O numero de identificação do funcionario e: %d\n", funcionario1[i-1].identificador);
    printf("O cargo do funcionario e: %s\n", funcionario1[i-1].cargo);
}

void altera_salario(Funcionario*funcionario1, float novo_salario){

    int i;

    printf("Escolha o funcionario que deseja alterar o salario (1,2,3...)\n");
    scanf("%d", &i);
    
    printf("Informe o novo salario: \t");
    scanf("%f", &novo_salario);
    funcionario1[i-1].salario=novo_salario;
}

void menor_maior(Funcionario*funcionario1, int quant_funcionario){

    Funcionario maior=funcionario1[0];

    Funcionario menor=funcionario1[0];

    int cont;

    for(cont=0;cont<quant_funcionario;cont++){
        

        if (cont>0)
        {
            if (funcionario1[cont].salario > maior.salario)
            {
                maior=funcionario1[cont];
            }

            if (funcionario1[cont].salario < menor.salario)
            {
                menor=funcionario1[cont];
            }
            

        }

        
        
    }
    printf("O salario do funcionario com menor salario e: %.2f\n", menor.salario);
        printf("E seu cargo e: %s\n", menor.cargo);

        printf("O salario do funcionario com maior salario e: %.2f\n", maior.salario);
        printf("E seu cargo e: %s\n", maior.cargo);
}
