#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    //init random
    srand(time(NULL));
    /*
    1- 0  1  2  3  4 --> starting range
    2- 0  2  4  6  8 --> multiply by 2
    3- 3  5  7  9  11 --> add 3
    4- 6  10 14 18 22 --> multiply by 2 again
    */
    int num = ((rand() % 5) * 2 + 3) * 2;
    //print num
    printf("%d", num);
}