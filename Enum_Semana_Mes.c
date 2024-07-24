#include<stdio.h>

typedef enum dias_semana{
    SEGUNDA=2,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
}DiaSemana;

typedef enum mes_ano{
    JANEIRO=1,
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
}MesAno;

int main(void){
    DiaSemana dia;
    MesAno mes;
    printf("Informe o dia da semana: 2 - 8\t");
    scanf("%d", &dia);
    printf("Informe o mes do ano 1 - 12\t");
    scanf("%d", &mes);

    switch (dia)
    {
    case SEGUNDA:
        printf("Segunda-feira\n");
        break;
    case TERCA:
        printf("Terca-feira\n");
        break;
    case QUARTA:
        printf("Quarta-feira\n");
        break;
    case QUINTA:
        printf("Quinta-feira\n");
        break;
     case SEXTA:
        printf("Sexta-feira\n");
        break;
     case SABADO:
        printf("Sabado\n");
        break;
    case DOMINGO:
        printf("Domingo\n");
        break;
    default:
        break;
    }

    switch (mes)
    {
    case 1:
        printf("Janeiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Marco\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;
    default:
        break;
    }

    return 0;
}