#include <stdio.h>

int main(void) {
/*23 - read three ints determines and prints largest and smallest

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
*/

/*25 - print my initials in block letters down the page, each letter made out of that letter

    printf(

    "          vv\n"
    "       vv\n"
    "    vv\n"
    " vv\n"
    "    vv\n"
    "       vv\n"
    "          vv\n"
    "            \n"                
    "IIIIIIIII II\n"
    "            \n"
    "           T\n"
    "           T\n"
    "           T\n"
    "TTTTTTTTTTTT\n"
    "           T\n"
    "           T\n"
    "           T\n"
    "            \n"
    "OOOOOOOOOOOO\n"
    "O          O\n"
    "O          O\n"
    "OOOOOOOOOOOO\n\n"
    );
*/

/*29 - print integer equivalents of letters

    char c;
    printf("Enter char to get int value for\n");
    scanf("%c", &c);

    printf("Int value of char: %d\n", c);
*/

/*32 - BMI calculator

    int weight, height;
    printf("Enter your weight in pounds:\n");
    scanf("%d", &weight);
    printf("Enter your height in inches:\n");
    scanf("%d", &height);

    printf(
        "BMI Values:\n"
        "Underweight: under 18.5\n"
        "Normal: 18.5-24.9\n"
        "Overweight: 25-29.9\n"
        "Obese: 30 and over\n"
        "-----------\n"
        "Your BMI index: %f\n", (float)(weight*703)/(height*height)
    );
*/
}