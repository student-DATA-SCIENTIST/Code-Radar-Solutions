// Your code here..
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int result = a | b;  // Perform bitwise OR operation
    printf("%d", result);
    
    return 0;
}