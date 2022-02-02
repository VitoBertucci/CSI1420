#include <stdio.h>

int main(void) {
//45-a) Factorial of given number

    printf("____________________________________________________________\n");
    printf("45-a: Factorial of given number\n");

    //init variables
    int var, varCount;
    int count = 1;
    int varMinusOne;
    int factVar;

    //prompt and store int to compute factorial of
    printf("Enter nonnegative integer to compute its factorial: \n");
    scanf("%d", &var);

    //if number is nonnegative:
    if(var >= 0) {
        //set a count for the integer since the integer value will be changing in the loop
        varCount = var;
        //set factorial of int to the int entered
        factVar = var;

        //while the count is less than the int entered (does not mult by 0)
        while(count < varCount) {

            //set (n-1)
            varMinusOne = (var -1);
            //n = n * (n-1)
            factVar *= varMinusOne;
            //move to next number of n
            var -= 1;
            //update count
            count++;
        }

        //print approximation
        printf("%d! is approximately: %d \n", varCount,factVar);
    } else {
        //let user know variable must be nonnegative:
        printf("Input number must be a nonnegative integer\n");
    }
    
    

//45-b) estimate value of e with (1 + 1/n! + 1/n+1! + 1/n+2! + ... 1/n+C!) (n=1, C=input)
    printf("____________________________________________________________\n");
    printf("45-b: Approximate value of e using 1/c!\n");

    //init variables
    float c;
    float n = 1;
    float bottom = 1;
    float approx = 1;

    //prompt for value of c to estimate up to
    printf("Enter value of c, where 1/c! is the last value to be added: \n");
    scanf("%f", &c);

    //until c value is reached:
    while(n <= c) {
        
        //bottom of fraction (n+1)! part of 1/(n+1)!
        bottom *= (n);

        //approximation is the last sum plus the current 1/(n+1)!
        approx = approx + (1/bottom);

        //increment n
        n++;
    }

    //display approximation to 10 decimal places
    printf("e with %d iterations of approximation: %.10f \n", (int)c, approx);


//45-c) estimate value of e^x with (1 + x^i/i! + x^i+1/(i+1)! + x^i+2/(i+2)! + ... + x^p/p!)
    printf("____________________________________________________________\n");
    printf("45-c: Approximate value of e^x using x^p/p!\n");
    //init variables
    float x, p;
    float i = 1.0;
    float numer = 1, denom = 1, value = 1;

    //prompt for and store x and p values
    printf("Enter value of x to approximate e^x:\n");
    scanf("%f", &x);
    printf("Enter value of p where x^p/p! is the final value to be added:\n");
    scanf("%f", &p);

    //iterate through p:
    while(i <= p) {

        //multiply last denom by current i+1 value
        denom *= i;

        //multiply numer by x each iteration (x^)
        numer *= x;

        //value is last value plus new factor of (numer/denom)
        value += (numer/denom);

        //increment i
        i++;
    }

    //print approx
    printf("Approximate value of e^%d with %d iterations of approximation: %.10f", (int)x, (int)p, value);
}