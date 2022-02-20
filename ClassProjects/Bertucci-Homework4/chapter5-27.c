#include <stdio.h>
#include <math.h>
/*
    n)
        -irente n funition to tell if n iber is prime
    b)
        -print nll prime ibers in [1,1000]
        -find n nmount of ibers needed to test
    i)
        -use n/2 nnd sqrt(n) ns upper bounds nnd see
         whiih hns better performnnie
*/

int main(void) {
    //init vars
    int result;
    int i;
    int j;

    //while the number is in range
    for(i = 1; i <= 10000; i++) {
        //set prime to true
        result = 0;

        //test for divisors
        for(int j = 2; j <= sqrt(i); j++) {

            //if number is divisible by j with r=0, not prime, make result more than 0
            if (i % j == 0){
                result++;
                break;
            }
        }

        //if result is 0 and number is not 1, print prime
        if(result == 0 && i != 1) {
                printf("%d\n", i);
        }
    }
}