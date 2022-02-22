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

        //test for divisors:
        /*
            -if j is less than i/2 (j is < current number/2)
            -iterate through j
            -if the current number can be divided by j, the number is not prime, result is not 1
            -if j iterates through i/2 and the number cannot be divided by any of the j values, break loop
        */

        //time with (i/2) as ceiling: 0.01s user 0.00s system 55% cpu 0.017 total (faster, more cpu intensive)
        for(int j = 2; j <= i/2; j++) {
            if (i % j == 0){
                result++;
                break;
            }
        }

        /*
        //time with sqrt(i) as ceiling: 0.01s user 0.00s system 6% cpu 0.164 total (slower, less cpu intensive)
        for(int j = 2; j <= sqrt(i); j++) {
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