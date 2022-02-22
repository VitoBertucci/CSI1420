#include <stdio.h>
#include <stdbool.h>
/*
    Use De Morgan's Law:
    (cond1 && cond2) = (!cond1 || !cond2)
    !(cond1 || cond2) = (!cond1 && !cond2)

    to create equivalent expressions for:
        a)!(x < 5) && !(y >= 7)
        b)!(a==b) || !(g != 5)
        c)!((x <= 8) && (y > 4))
        d)!((i > 4) || (j <= 6))
*/
int main(void) {
    
    //a)
    int x = 6;
    int y = 3;

    //original
    bool exA = (!(x < 5) && !(y >= 7));

    //rewrite
    bool valA = !((x < 5) || (y >= 7));

    //output
    if(exA == valA) {
        printf("both expressions for A are equal\n");
    }

    //b)
    int a = 1;
    int b = 1;
    int g = 2;

    //original
    bool exB = (!(a == b) || !(g != 5));

    //rewrite
    bool valB = !((a == b) && (g != 5));

    //output
    if(exB == valB) {
        printf("both expressions for B are equal\n");
    }

    //c)
    int x2 = 9;
    int y2 = 9;

    //original 
    bool exC = !((x <= 8) && (y > 4));

    //rewrite
    bool valC = (!(x <= 8) || !(y > 4));

    //output
    if(exC == valC) {
        printf("both expressions for C are equal\n");
    }

    //d)
    int i = 3;
    int j = 8;

    //original 
    bool exD = !((i > 4) || (j <= 6));

    //rewrite
    bool valD = (!(i > 4) && !(j <= 6));

    //output
    if(exD == valD) {
        printf("both expressions for D are equal\n");
    }
}