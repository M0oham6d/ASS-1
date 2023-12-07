#include <stdio.h>

int main() {
    int seconds;
    printf("Enter The Number Of Seconds: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;

    printf("Time Is %d Hours, %d Minutes, and %d Seconds.\n", hours, minutes, remaining_seconds);

    return 0;
}
