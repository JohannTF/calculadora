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
                sumar();
                break;
            // Restar
            case 2:
                resta();
                break;
            // Multiplicar
            case 3:
                multiplicar();
                break;
            // Dividir
            case 4:
                Dividir();
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

void Dividir(){
    int num1, num2;
    printf("Ingrese numerador: ");
    scanf("%d", &num1);
    printf("Ingrese denominador: ");
    scanf("%d", &num2);
    if(num2==0){
        printf("\nDivision por cero\n");
    }
    else{
        float resultado = 1.0*num1 / num2;
        printf("Resultado: %.2f",resultado);
    }

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

void sumar() {
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("La suma es: %d\n", resultado);
}

void multiplicar(){
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("La suma es: %d\n", resultado);
    resultado = num1 * num2;
    printf("La multiplicación es: %d\n", resultado);
    

}

    
void resta(){
    float a,b;
    printf("Ingrese el primer numero: ");
    scanf("%f",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&b);
    printf("El resultado de la resta es: %f\n",a-b);
}