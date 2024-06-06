#include<stdio.h>
#include<math.h>

void calcula_hexagono(float l, float *area, float *perimetro);

int main(void){

    float l=0;
    float area, perimetro;

    printf("Informe o tamanho do lado do hexagono.\n");
    scanf("%f", &l);


    calcula_hexagono(l, &area, &perimetro);

    printf("A area do hexagono e: %.2f\t e o seu perimetro e %.2f\n", area, perimetro);

    return 0;
}

void calcula_hexagono(float l, float *area, float *perimetro){

    *area=(3*(pow(l,2))*sqrt(3))/2;

    *perimetro=6*l; 

}