#include <stdio.h>

int main(void) {
//23 - read three ints determines and prints largest and smallest

    //get three ints and store them
    int num1,num2,num3;
    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");
    scanf("%d", &num2);
    printf("Enter third number: \n");
    scanf("%d", &num3);

    int large,small;
    
    //get large and small of first and second num
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

    //num3 assignment according to large and small found above
    if(num3 > large) {
        large = num3;
    } else if(num3 < small) {
        small = num3;
    }

    //display 
    if(num1 == num2 && num1 == num3) {
        printf("All three numbers are the same");
    } else {
        printf("large num is: %d\n", large);
        printf("small num is: %d\n", small);
    }

//25 - print my initials in block letters down the page, each letter made out of that letter

//29 - print integer equivalents of letters

    // //init char
    // char c;
    // //ask and store user char
    // printf("Enter char to get int value for\n");
    // scanf("%c", &c);
    // //display char as int value
    // printf("Int value of char: %d\n", c);
//32 
/*
    BMI calculator
        take (weight x 703)/ (height)^2
        display normal BMI values for user:
            Underweight: under 18.5
            Normal: 18.5-24.9
            Overweight: 25-29.9
            Obese: 30 and over
*/
}