#include <stdio.h>
#include <stdlib.h>

typedef enum mes_ano
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} MesAno;

typedef struct data
{
    int dias;
    MesAno mes;
    int ano;
} Data;

int main()
{
    Data data1;

    printf("Informe o dia, mes e ano (DD/MM/AAAA):\n");
    scanf("%d %d %d", &data1.dias, &data1.mes, &data1.ano);

    printf("A data e:\n");

    printf("%d/", data1.dias);

    switch (data1.mes)
    {
    case JANEIRO:
        printf("01/");
        break;
    case FEVEREIRO:
        printf("02/");
        break;
    case MARCO:
        printf("03/");
        break;
    case ABRIL:
        printf("04/");
        break;
    case MAIO:
        printf("05/");
        break;
    case JUNHO:
        printf("06/");
        break;
    case JULHO:
        printf("07/");
        break;
    case AGOSTO:
        printf("08/");
        break;
    case SETEMBRO:
        printf("09/");
        break;
    case OUTUBRO:
        printf("10/");
        break;
    case NOVEMBRO:
        printf("11/");
        break;
    case DEZEMBRO:
        printf("12/");
        break;
    default:
        break;
    }

    printf("%d",data1.ano);

    return 0;
}