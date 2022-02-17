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
    printf("a)\n");
    int x = 6;
    int y = 3;

    //original
    bool exA = (!(x < 5) && !(y >= 7));
    printf("boolean value of original: %d\n", exA); 

    //rewrite
    bool valA = !((x < 5) || (y >= 7));
    printf("Boolean value of rewrite: %d\n", valA);

    //b)
    printf("b)\n");
    int a = 1;
    int b = 1;
    int g = 2;

    //original
    bool exB = (!(a == b) || !(g != 5));
    printf("boolean value of original: %d\n", exB);

    //rewrite
    bool valB = !((a == b) && (g != 5));
    printf("boolean value of rewrite: %d\n", valB);

    //c)
    printf("c)\n");

    int x2 = 9;
    int y2 = 9;

    //original 
    bool exC = !((x <= 8) && (y > 4));
    printf("boolean value of original: %d\n", exC);

    //rewrite
    bool valC = (!(x <= 8) || !(y > 4));
    printf("boolean value of rewrite: %d\n", valC);

    //d)
    printf("d)\n");

    int i = 3;
    int j = 8;

    //original 
    bool exD = !((i > 4) || (j <= 6));
    printf("boolean value of original: %d\n", exD);

    //rewrite
    bool valD = (!(i > 4) && !(j <= 6));
    printf("boolean value of rewrite: %d\n", valD);
}