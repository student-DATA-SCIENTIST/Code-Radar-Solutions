// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    // Set the nth bit using bitwise OR
    int result = num | (1 << n);
    
    printf("%d", result);
    
    return 0;
}