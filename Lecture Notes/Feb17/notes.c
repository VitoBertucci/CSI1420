#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//pass by value function (does not return new value of parameter)
int doubleIntValue(int x) {
    return x * 2;
}

//-----------------------------------------------

//pass by reference function (returns new value of parameter)
void doubleIntRef(int *x) {
    *x = 2*(*x);
}

//-----------------------------------------------

//roll 6-sided die function
//int roll();
int roll() {
    int x;
    x = 1 + rand() % 6;
    return x;
}

//gcc notes.c -std=c11 --> compile with 2011 C Standard
//p = &x, thus *p = x
int main(void) {
    //seed rand():
    srand(time(NULL));

    //calculate random x in main():
    int x;
    for(int i = 1; i < 5; i++) {
        x = 1 + rand() % 6;
        printf("%d\n", x);
    }

    //use roll() function:
    for(int i = 0; i < 5; i++) {
        printf("%d\n", roll());
    }
    
    //-----------------------------------------------
    
    //pass by value:
    int a = 5;
    doubleIntValue(a); //--> does not return new a value
    printf("%d\n", a); //--> returns 5
    

    //pass by reference:
    int b = 5;
    doubleIntRef(&b); //--> changes value of a in memory
    printf("%d\n", b); //--> returns 10
}