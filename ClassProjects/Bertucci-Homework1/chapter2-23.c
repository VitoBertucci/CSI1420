#include <stdio.h>

int main(void) {
    
    int num1,num2,num3;
    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");
    scanf("%d", &num2);
    printf("Enter third number: \n");
    scanf("%d", &num3);

    int large,small;
    
    if(num1 < num2) {
        small = num1;
        large = num2;
    } else if(num1 > num2) { 
        large = num1;
        small = num2;
    } else if(num1 == num2) {
        large = num1;
        small = num2;
    }

    if(num3 > large) {
        large = num3;
    } else if(num3 < small) {
        small = num3;
    }

    if(num1 == num2 && num1 == num3) {
        printf("All three numbers are the same");
    } else {
        printf("large num is: %d\n", large);
        printf("small num is: %d\n", small);
    }
}