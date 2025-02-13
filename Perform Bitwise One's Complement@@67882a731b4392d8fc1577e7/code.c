// Your code here...
#include <stdio.h>

int main() {
    int b;
    scanf("%d",&b);
    
    int result = ~b;  // Perform bitwise AND operation
    printf("%d", result);
    
    return 0;
}