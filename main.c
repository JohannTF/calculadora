#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;

    do {
        mostrarMenu();
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            // Sumar
            case 1:
                break;
            // Restar
            case 2:
                break;
            // Multiplicar
            case 3:
                break;
            // Dividir
            case 4:
                break;
            // Exponencial
            case 5:
                exponencial();
                break;
            // Modulo
            case 6:
                break;
            case 7:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while(opcion != 7);
    return 0;
}

void mostrarMenu() {
    printf("\nCalculadora\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Exponencial\n");
    printf("6. Modulo\n");
    printf("7. Salir\n");
}

void exponencial(){
    int num1, num2, resultado = 1;
    printf("Ingrese el numero base: ");
    scanf("%d", &num1);
    printf("Ingrese la potencia: ");
    scanf("%d", &num2);
    for (int i = 0; i < num2; i++)
    {
        resultado *= num1;
    }
    printf("El resultado es: %d\n", resultado);
    
void resta(){
    float a,b;
    printf("Ingrese el primer numero: ");
    scanf("%f",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&b);
    printf("El resultado de la resta es: %f\n",a-b);
}