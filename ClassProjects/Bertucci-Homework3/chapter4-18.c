#include <stdio.h>

/*
Create graph:
    take int as input
    output * times the input int

    ex: int 5 = input
        ***** = output
*/

int main(void) {

    //init num
    int num;

    //prompt user
    printf("Enter 5 numbers to be charted: \n");

    //loop 5 times
    int j = 0;

    //loop through user input
    while((scanf("%d", &num)) && j < 5) {

        //num must be < 30
        if(num > 30) {
            continue;
        }

        //print number of * = num val
        for(int i = 0; i < num; i++) {
            printf("*");
        }

        //next line and increment j
        printf("\n");
        j++;
    }
    
}