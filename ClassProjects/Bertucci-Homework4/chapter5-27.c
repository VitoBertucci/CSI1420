#include <stdio.h>
#include <math.h>

int main(void) {

    //init vars
    int result;
    int i;
    int j;

    //while the number is in range
    for(i = 1; i <= 10000; i++) {

        //set prime to true
        result = 0;

        //0.02s user 0.00s system 75% cpu 0.034 total using i/2
        //test for divisors
        for(int j = 2; j <= i/2; j++) {

            //if number is divisible by j with r=0, not prime, make result more than 0
            if (i % j == 0){
                
                result++;
                break;
            }
        }

        /*
        //0.02s user 0.00s system 71% cpu 0.038 total using sqrt(i)
        //test for divisors
        for(int j = 2; j <= sqrt(i); j++) {

            //if number is divisible by j with r=0, not prime, make result more than 0
            if (i % j == 0){
                result++;
                break;
            }
        }
        */

        //if result is 0 and number is not 1, print prime
        if(result == 0 && i != 1) {
                printf("%d\n", i);
        }
    }
}