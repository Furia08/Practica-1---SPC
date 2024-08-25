#include <stdio.h>

int main(){
    int exp, Cmultiplic;
    float base, prod = 1;

    printf("Ingresar valor real de base: ");
    scanf("%f", &base);
    printf("Ingresar valor entero de exponente: ");
    scanf("%d", &exp);

    for (Cmultiplic=1; Cmultiplic <= exp; Cmultiplic++){
        prod = prod * base;
    }
    printf("El resultado de la potencia es: %.2f", prod);
    return 0;
}
