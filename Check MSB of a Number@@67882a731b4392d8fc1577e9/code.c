// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check if MSB is set for a signed integer
    if (num < 0) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}