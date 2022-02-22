#include <stdio.h>

int main(void) 
{
    //input output
    int num1, num2;
    printf("Enter a number:\n");
    scanf("%d", &num1);
    printf("Your number: %d\n", num1);

    //division operators ints and floats
    printf("division: x/2 = %d\n", num1/2);
    printf("floating point division x/2 = %f\n", (float)num1/2);

    //conditional operators
    printf ("Enter another number: \n");
    scanf("%d", &num2);
    printf("Your second number: %d\n", num2);
    if(num1 == num2)
    {
        printf("num1 and num2 are equal");
    } else
    {
        printf("num1 and num2 are not equal");
    }
}