#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read input from the user

    // Check divisibility by 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }

    return 0;
}