#include <stdio.h>
#include <math.h>

/*use integers to calculate compound interest
    ex:
        $14,000.00 = 1400000
        use whole numbers to calculate compound interest
        divide final by 100
        take remainder as the cents value, dividend as dollar amount
        concat on output
*/

int main(void) {
    //principal is $1000.00 cash so int is 100000
    int p = 100000;

    //output table
    printf("%4s%21s\n", "Year", "Amount on deposit");

    //amount on each deposit per year for 10 years
    for(unsigned int year = 1; year <= 10; ++year) {

        //calc amount p * 1.00 + r ^ year
        int amount = p * pow((1.05), year);
        int dollar = (amount/100);
        int cent = (amount % 100);

        //print table row
        printf("%4u%18d.%d\n", year, dollar, cent);
    }
}