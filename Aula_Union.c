#include<stdio.h>

union tipos
{
    int inteiro;
    float real;
    char letra;
};
typedef union tipos Tipos;

int main(){
    Tipos variavel;
    variavel.inteiro=2;
    printf("%d, %d, %d\n", variavel.inteiro, variavel.inteiro, variavel.inteiro);
    variavel.real=2.5;
    printf("%d, %f, %c\n", variavel.inteiro, variavel.real, variavel.letra);
    variavel.letra='s';
    printf("%d, %f, %c\n", variavel.inteiro, variavel.real, variavel.letra);

    return 0;
}
