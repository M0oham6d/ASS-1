#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        reversedNum = (num % 10) * 100 + ((num / 10) % 10) * 10 + num / 100;

        printf("Reversed number: %d\n", reversedNum);
    } else {
        printf("Please enter a valid three-digit number.\n");
    }

    return 0;
}
