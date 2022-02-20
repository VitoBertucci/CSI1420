#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
- write a statement that will print one number from [6,10,14,18,22]
- find rand() in range [6,22], where dx is 4, n is 5
- (6,10,14,18,22) = 2(3,5,7,9,11)
*/

int main(void) {
    //init random
    srand(time(NULL));
    
    /*
    1- generate an odd num on [0,5]
    2- multiply by 2 --> 0, 2, 4, 6, 8
    3- add 3 --> 3, 5, 7, 9, 11
    4- multiply by 2 again --> 6, 10, 14, 18, 22
    */
    int num = ((rand() % 5) * 2 + 3) * 2;

    //print num
    printf("%d", num);
}