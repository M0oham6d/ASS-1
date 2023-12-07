#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integer numbers, a and b: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values of a and b: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Values of a and b after swapping: a = %d, b = %d\n", a, b);

    return 0;
}
