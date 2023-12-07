#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius, kelvin;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (float)(fahrenheit - 32) * 5 / 9;
    kelvin = celsius + 273.15;

    printf("\nTemperature in Celsius: %.2f °C\n", celsius);
    printf("Temperature in Kelvin: %.2f K\n", kelvin);

    return 0;
}
