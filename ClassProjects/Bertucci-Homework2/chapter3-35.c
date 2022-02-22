#include <stdio.h>
#include <math.h>

int main(void) {
/*
35 - printing binary to decimal
    1101 = (1*2^0) + (0*2^1) + (1*2^2) + (1*2^3)
    1101 =   (1)   +   (0)   +   (4)   +   (8)  = 13
*/

    //init variables
    int num, r;
    int decimal = 0;
    
    //prompt for binary number
    printf("Enter binary number: \n");
    scanf("%d", &num);

    //while number has digits, iterate through digits
    for(int i = 0; num > 0; i++) {
        

        //sum where digit is 1 --> 2^i to get decimal value
        if(num % 10 != 0) {
            decimal = decimal + (pow(2,i));
        }

        //move to next digit of binary num
        num = (num / 10);
    }

    //output
    printf("number: %d", decimal);

    
}