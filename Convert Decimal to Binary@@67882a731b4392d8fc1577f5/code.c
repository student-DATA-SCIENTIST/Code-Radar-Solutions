// Your code here...
#include <stdio.h>

void printBinary(int num) {
    if (num > 1)
        printBinary(num >> 1);  // Recursively shift right

    printf("%d", num & 1);  // Print LSB
}

int main() {
    int num;
    scanf("%d", &num);
    
    printBinary(num);
    
    return 0;
}