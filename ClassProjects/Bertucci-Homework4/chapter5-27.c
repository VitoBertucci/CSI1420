#include <stdio.h>
#include <math.h>

//prime test
int prime(int num) {
    //set result to 0
    int result = 0;
    int count = 1;

    //loop through j/2 and if j fits evenly into num, num is not prime
    for(int j = 2; j <= sqrt(num); j++) {
        //add 1 to result if j fits into num evenly
        if (num % j == 0){
            result++;
            break;
        }

        //increment count for each successfull iteration 
        count++;
    }

    //return 0 if prime, return 1 if not prime
    if(result == 0) {
        printf("%d\n", num);
    } 

    //return number of iterations
    return count;
}


int main(void) {

    //init vars
    int result;
    int count = 0;

    //while the number is in range
    for(int i = 2; i <= 10000; i++) {

        //test if i is prime, add number of iterations to total iterations
        count += prime(i);
    }

    //
    printf("total iterations: %d", count);
    
}