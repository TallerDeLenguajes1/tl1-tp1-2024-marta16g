#include <stdio.h>

int main (){

    int pepa = 50;
    int *puntero;
    puntero = &pepa;


    printf("El contenido del puntero: %d \n", *puntero);
    printf("La dirección de memoria que guarda el puntero: %d \n", puntero);
    printf("Dirección de memoria de la variable: %d \n", &pepa);
    printf("Dirección de memoria del puntero: %d \n", &puntero);
    printf("Tamanio de la memoria utilizado por la variable: %d \n", sizeof(pepa));
    printf("Hola Mundo");

    return 0;
}