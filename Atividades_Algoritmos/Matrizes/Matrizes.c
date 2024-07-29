#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, count, i, costa = 0;

    printf("Informe o numero de linhas e colunas do mapa.\n");
    scanf("%d %d", &m, &n);
    if (m < 1 || n > 1000)
    {
        printf("Numeros invalidos.\n");
        exit(1);
    }

    char **matriz = (char **)malloc(m * sizeof(char *));
    if (matriz == NULL)
    {
        printf("Erro na memoria.\n");
        exit(1);
    }

    for (count = 0; count < m; count++)
    {
        matriz[count] = (char *)malloc(n * sizeof(char));
        if (matriz[count] == NULL)
        {
            printf("Erro na memoria.\n");
            exit(1);
        }
    }

    printf("Informe se o espaco do mapa tem terra(#) ou mar(.)\n");

    for (count = 0; count < m; count++)
    {
        scanf(" %[^\n]", matriz[count]);
    }

    for (count = 0; count < m; count++)
    {
        for (i = 0; i < n; i++)
        {
            if (matriz[count][i] == '#')
            {
                if (count == 0  || i == 0 || (count == m - 1 && i != 0) || (i == n-1 && (count!= 0 &&  count != m - 1)))
                {
                    costa++;
                }
                if (count != 0 && i != 0 && count != m - 1 && i != n - 1)
                {
                    if (matriz[count + 1][i] == '.' || matriz[count - 1][i] == '.' || matriz[count][i + 1] == '.' || matriz[count][i - 1] == '.')
                    {
                        costa++;
                    }
                }
            }
        }
    }

    printf("A costa contem %d quadrados.\n", costa);

    return 0;
}