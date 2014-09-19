/*
 * Exercise 2.1 - Take user input in inches and output
 * in yards, feet and inches
 */

#include <stdio.h>

void main() {
    long inches = 0L; // Inches input by user
    long yardRemainder = 0L;
    long feetRemainder = 0L;
    const long inches_to_foot = 12L;
    const long inches_to_yard = 36L;

    /* Get user input in inches */
    printf("Enter the amount of inches you would like to convert: ");
    scanf("%ld", &inches);

    yardRemainder = inches % inches_to_yard;

    feetRemainder = yardRemainder % inches_to_foot;
    
    /* Display results to user */
    printf("%ld yards, %ld foot/feet and %ld inches.\n", inches / inches_to_yard, yardRemainder / inches_to_foot, feetRemainder);
}

