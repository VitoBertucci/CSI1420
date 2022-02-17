#include <stdio.h>

//sum even integers from 2-30
int main(void) {

    //init sum
    int sum = 0;

    //start i at 2, add i to sum, add 2 every iter
    for(int i = 2; i < 31; i+=2) {
        sum += i;
    }

    //print sum
    printf("%d\n", sum);

}