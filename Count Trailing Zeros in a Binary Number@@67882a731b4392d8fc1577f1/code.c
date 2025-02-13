// Your code here...#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // Count trailing zeros
    while ((num & 1) == 0 && num != 0) {
        num >>= 1;  // Right shift to check next bit
        count++;
    }

    printf("%d", count);
    
    return 0;
}