// Your code here...
#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    
    // Iterate from the MSB to LSB
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break; // Stop when the first 1 is found
        }
        count++; // Count leading zeros
    }
    
    printf("%d", count);
    
    return 0;
}