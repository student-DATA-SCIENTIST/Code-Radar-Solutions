// Your code here...
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);  // Read input character

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}