#include <stdio.h>

int main(void) {
/* 16 - mpg per tank and total
    -enter gallones used
    -end miles driven
    -miles per gallon this tank
    -overall average mpg
    -while loop with -1 to end
*/

    //init variables
    float gallons = 0.0;
    float miles = 0.0;
    float totMiles = 0.0;
    float totGallons = 0.0;
    int tankCount = 0; 
    float input = 0.0;

    //while not sentinel value
    while(input != -1.0) {

        //ask and scan for gallons
        printf("Enter gallons used (-1 to end): \n");
        scanf("%f", &input);

        //if not sentinel value
        if(input != -1) {

            //make input to gallons, add gallons to gallons total
            gallons = input;
            totGallons += gallons;

            //ask and scan for miles
            printf("Enter the miles driven: \n");
            scanf("%f", &input);

            //make input to miles, add miles to miles total 
            miles = input;
            totMiles += miles;

            //print mpg for this tank
            printf("The miles/gallon on this tank was %f\n", (miles/gallons));

            //reset input values, count tank
            miles = 0.0;
            gallons = 0.0;
            tankCount++;
        }
    }

    //if user entered at least one tank:
    if(tankCount > 0) {
        //print total avg mpg with totMiles/totGallons
        printf("The overall average miles/gallon was %f\n", (totMiles/totGallons));
    } else {
        //inform user that must have at least one tank entered
        printf("Must enter at least one tank's information\n");
    }
}