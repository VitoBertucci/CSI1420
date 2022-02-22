#include <stdio.h>

/*
compile linked files:
>> gcc -c File1.c -o File1.o
>> gcc -c File2.c -o File2.o
>> gcc File1.o File2.o -o Prog.out

storage class specifiers:
    -auto
    -register = faster (stored in cpu)
    -extern
    -static
*/

//global variable
int x = 1;

int main(void) {

    //new scope
    int x = 5;
    //printf("%d", x);

    {
        //inside scope
        int x = 7;
        //printf("%d", x);
    }

}