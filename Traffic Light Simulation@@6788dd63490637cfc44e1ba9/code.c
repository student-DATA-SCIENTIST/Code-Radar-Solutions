#include <stdio.h>

int main() {
    char signal;
    scanf(" %c", &signal); // Space before %c to ignore any newline or space character

    switch(signal) {
        case 'R': printf("Stop\n"); break;
        case 'G': printf("Go\n"); break;
        case 'Y': printf("Slow Down\n"); break;
        default: printf("Invalid input\n");
    }

    return 0;
}
