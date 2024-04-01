#include <stdio.h>


void cuadradoDeNumeros(int num);
void mostrarDatos(int num);
void Invertir(int a, int b);

int main() {

    int num1, num2, num3;
    
    puts("Escriba un numero (puntos a y b)");
    scanf("%d", &num1);
    

    cuadradoDeNumeros(num1);
    mostrarDatos(num1);

    puts("Escriba dos numeros (puntos d y e)");
    scanf("%d %d", &num2, &num3);

    Invertir(num2, num3);
    
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
    puts("Originales");
    printf("a: %d   b: %d \n", a, b);

    int copiab = b;

    b = a;
    a = copiab;

    puts("Resultados");
    printf("a: %d   b: %d", a, b);
   
}