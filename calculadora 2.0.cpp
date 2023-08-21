#include <stdio.h>

int main() {
    float celsius = 16.0;
    float fahrenheit = 86.0;

    printf("Temperatura en Celsius: %f\n", celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("Temperatura en Fahrenheit: %f\n", fahrenheit);
    printf("\n");

    scanf("%f", &fahrenheit) = 86; {
        printf("Entrada no válida. Se mantendrá el valor 86.0.\n");
    }

    printf("Fahrenheit ingresado: %f\n", fahrenheit);

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("Celsius: %f\n", celsius);

    return 0;
}

