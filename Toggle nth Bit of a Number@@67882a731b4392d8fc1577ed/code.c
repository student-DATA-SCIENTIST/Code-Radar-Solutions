// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    // Toggle the nth bit using bitwise XOR
    int result = num ^ (1 << n);
    
    printf("%d", result);
    
    return 0;
}