#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // Read three space-separated integers

    // Using conditional statements to find the maximum
    if (a >= b && a >= c) {
        printf("%d\n", a);
    } else if (b >= a && b >= c) {
        printf("%d\n", b);
    } else {
        printf("%d\n", c);
    }

    return 0;
}