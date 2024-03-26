#include <stdio.h>


void cuadradoDeNumeros(int num);
void mostrarDatos(int num);
void Invertir(int a, int b);

int main() {

    int num1;
    
    puts("Escriba el numero");
    scanf("%d", &num1);
    

    cuadradoDeNumeros(num1);
    mostrarDatos(num1);
    
    return 0;
}

void cuadradoDeNumeros(int num)
{
    int resultado = num * num;
    printf("El cuadrado del numero ingresado es: %d \n", resultado);
}

void mostrarDatos(int num)
{
    printf("La dirección de la variable es: %d \n", &num);
    printf("El contenido de la variable es: %d \n", num);
}

void Invertir(int a, int b)
{
    
}