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
                modulo();
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
}

void modulo() {
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número el que será el divisor: ");
    scanf("%d", &num2);
    // Validar division entre cero
    if (num2 == 0) {
        printf("Error: No se puede dividir entre cero.\n");
        return;
    }
    resultado = num1 % num2;
    printf("El módulo es: %d\n", resultado);
}