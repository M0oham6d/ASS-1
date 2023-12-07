#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integer numbers, a and b: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values of a and b: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Values of a and b after swapping: a = %d, b = %d\n", a, b);

    return 0;
}

