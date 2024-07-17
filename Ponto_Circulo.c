#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct ponto{
    float x,y;
}Ponto;

typedef struct circulo{
    Ponto centro;
    float raio;
}Circulo;

//Recebe o centro e o raio do circulo
void captura_circulo(Circulo *circulo1);
//Recebe as coordenadas x e y do ponto
void captura_ponto(Ponto*ponto1);
//Calcula a distancia entre o ponto e o centro do circulo
void calcula_distancia(float *distancia, Circulo *circulo1, Ponto *ponto1);

int main(){
    Circulo *circulo2=(Circulo*)malloc(sizeof(Circulo));
    if (circulo2==NULL)
    {
        printf("Erro de alocação de memoria");
        exit(1);
    }
    
    Ponto *ponto2=(Ponto*)malloc(sizeof(Ponto));
    if (ponto2==NULL)
    {
        printf("Erro de alocação de memoria");
        exit(1);
    }

    float distancia1;

    captura_circulo(circulo2);
    captura_ponto(ponto2);

    printf("Centro do círculo: (%.2f, %.2f)\n", circulo2->centro.x, circulo2->centro.y);
    printf("Raio do círculo: %.2f\n", circulo2->raio);
    printf("Ponto: (%.2f, %.2f)\n", ponto2->x, ponto2->y);


    calcula_distancia(&distancia1, circulo2, ponto2);

    if (distancia1>circulo2->raio)
    {
        printf("O ponto esta fora do circulo");
    }
    else
    {
        printf("O ponto esta dentro do circulo");
    }
    
    free(circulo2);
    free(ponto2);

    return 0;
}

void captura_circulo(Circulo *circulo1){
    printf("Digite os valores do centro do circulo\n");
    scanf("%f %f", &circulo1->centro.x, &circulo1->centro.y);
    printf("Informe o raio do circulo\n");
    scanf("%f", &circulo1->raio);
}

void captura_ponto(Ponto*ponto1){
    printf("Informe a posicao do ponto\n");
    scanf("%f %f", &ponto1->x, &ponto1->y);
}

void calcula_distancia(float *distancia, Circulo *circulo1, Ponto *ponto1){
    *distancia=sqrt(pow(ponto1->x - circulo1->centro.x, 2) + pow(ponto1->y - circulo1->centro.y, 2));

}