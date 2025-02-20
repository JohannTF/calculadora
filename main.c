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