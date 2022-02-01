#include <stdio.h>

int main(void) {
    
    int weight, height;
    printf("Enter your weight in pounds:\n");
    scanf("%d", &weight);
    printf("Enter your height in inches:\n");
    scanf("%d", &height);

    printf(
        "BMI Values:\n"
        "Underweight: under 18.5\n"
        "Normal: 18.5-24.9\n"
        "Overweight: 25-29.9\n"
        "Obese: 30 and over\n"
        "-----------\n"
        "Your BMI index: %f\n", (float)(weight*703)/(height*height)
    );
}