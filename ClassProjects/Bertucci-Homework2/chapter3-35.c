#include <stdio.h>

int main(void) {
/* 35 - printing decimal equivalent of binary number
        -given a 5 or less digit binary number, translate it to base 10 number
        -1101 = (1*1 + 0*2 + 1*4 + 1*8)
*/

    //init variables
    int biNum, biRemainder;
    int biBase = 1;
    int decNum = 0;
    int num;
    int d1,d2,d3,d4,d5;

    //prompt for binary number and store
    printf("Enter binary number up to 5 digits: \n");
    scanf("%d", &num);

    //store in num variable
    biNum = num;

    //while number is greater than zero (until out of digits)
    while (num > 0)  
        {  
            //remainder of num/10 (101/10 = 10r1)
            biRemainder = num % 10;
            //decnum = (remainder * current base) + decnum
            decNum = decNum + biRemainder * biBase;  
            //move to next digit
            num = num / 10; 
            //increase base by power of 2
            biBase = biBase * 2;  
        }

    //print binary num and decimal num
    printf("Binary number: %d \n", biNum);
    printf("Decimal number: %d", decNum); 
}