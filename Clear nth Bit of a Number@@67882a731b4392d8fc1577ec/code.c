// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    // Clear the nth bit using bitwise AND with NOT
    int result = num & ~(1 << n);
    
    printf("%d", result);
    
    return 0;
}