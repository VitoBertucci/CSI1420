#include <stdio.h>

//pass by value function (does not return new value of parameter)
int doubleInt(int x);
int doubleInt(int x) {
    return x * 2;
}

//----------------------

//use pointer to change the value of x in memory
void doubleIntAgain(int *x);
void doubleIntAgain(int *x) {
    *x = 2*(*x);
}

int main(void) {
    int a = 5;

    //pass by value:
    //doubleInt(a); --> does not return new a value

    //pass by reference:
    //doubleIntAgain(&a); --> changes value of a in memory

    printf("%d\n", a);
}