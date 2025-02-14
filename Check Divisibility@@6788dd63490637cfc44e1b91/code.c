// Your code here...#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);  // Read input from the user

    // Leap year condition
    if (year % 5 == 0 && year % 11 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }

    return 0;
}