#include <stdio.h>

int main(void) {
    char c;

    printf("Enter char:\n");
    scanf("%c", &c);

    switch(c) {
        case 'a':
            printf("You entered a as the int\n");
            break;
        case 'b':
            printf("You entered b as the int\n");
            break;
        case 'c':
            printf("You entered c as the int\n");
            break;
        default:
            printf("You entered something other than a, b, or c as the char\n");
            break;
    }

}