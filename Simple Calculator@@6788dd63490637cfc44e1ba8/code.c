// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // Taking input
    scanf("%d %d %c", &a, &b, &op);

    // Switch case for operation
    switch(op) {
        case '+': 
            printf("%d\n", a + b);
            break;
        case '-': 
            printf("%d\n", a - b);
            break;
        case '*': 
            printf("%d\n", a * b);
            break;
        case '/': 
            if (b == 0) {
                printf("error\n"); // Handling division by zero
            } else {
                printf("%d\n", a / b);
            }
            break;
        default: 
            printf("error\n"); // Handling invalid operator
    }

    return 0;
}
