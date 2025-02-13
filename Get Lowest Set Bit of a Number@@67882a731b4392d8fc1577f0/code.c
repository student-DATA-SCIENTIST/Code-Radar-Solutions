// Your code here...
#include <stdio.h>

int main() {
    int num, position = 0;
    scanf("%d", &num);

    // Find the position of the lowest set bit
    while ((num & 1) == 0) {
        num >>= 1;  // Right shift to check next bit
        position++;
    }

    printf("%d", position);
    
    return 0;
}