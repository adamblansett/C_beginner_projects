/* Program 2.17 Calculating the height of a tree */

#include <stdio.h>

void main()
{
    long shorty = 0L; // Shorty's height in inches
    long lofty = 0L; // Lofty's height in inches
    long feet = 0L; // A whole number of feet
    long inches = 0L; // A whole number of inches
    long shorty_to_lofty = 0L; // Distance from Shorty to Lofty in inches
    long lofty_to_tree = 0L; // Distance from Lofty to tree in inches
    long tree_height = 0L; // Height of tree in inches
    const long inches_per_foot = 12L;

    /* Get Loft's height */
    printf("Enter Lofty's height to the top of his/her head, in whole feet: ");
    scanf("%ld", &feet);
    printf("       ...and then inches: ");
    scanf("%ld", &inches);
    lofty = feet * inches_per_foot + inches;

    /* Get Shorty's height */
    printf("Enter Shorty's height to the top of his/her eyes, in whole feet: ");
    scanf("%ld", &feet);
    printf("       ...and then inches: ");
    scanf("%ld", &inches);
    shorty = feet * inches_per_foot + inches;

    /* Get the distance from Shorty to Lofty */
    printf("Enter the distance between Shorty and Lofty, in whole feet: ");
    scanf("%ld", &feet);
    printf("       ...and then inches: ");
    scanf("%ld", &inches);
    shorty_to_lofty = feet * inches_per_foot + inches;

    /* Get the distance from Lofty to tree */
    printf("Finally enter the distance to the tree to the nearest foot: ");
    scanf("%ld", &feet);
    lofty_to_tree = feet * inches_per_foot;

    /* Calculate the height of the tree in inches */
    tree_height = shorty + (shorty_to_lofty + lofty_to_tree) * (lofty - shorty) / shorty_to_lofty;
    
    /* Display the result in feet and inches */
    printf("The height of the tree is %ld feet and %ld inches.\n", tree_height / inches_per_foot, tree_height % inches_per_foot);
}

