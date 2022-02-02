#include <stdio.h>

int main (void) {
/* 23 - find largest number
        -given 10 numbers, find biggest number
        -write psuedocode
            -counter 
            -number
            -largest
        -write code

        -psuedocode:
            largest = -1
            while (count up to 10)
                prompt for number
                scan and store number
                if (number is greater than largest)
                largest = number
                count++
            print(largest)
*/

    //init variables
    int number;
    int largest = -1;
    int count = 0;

    //while there are less than 10 entries
    while(count < 10) {

        //prompt for and store input number
        printf("Enter number: \n");
        scanf("%d", &number);

        //if number is greater than current largest, largest is current number (must be nonnegative)
        if(number < 0) {
            printf("Number must be a nonnegative int\n");
            count--;
        } else if (number > largest){
            largest = number;
        }
        count++;
    }

    //print largest
    printf("Largest number of set was: %d", largest);
}