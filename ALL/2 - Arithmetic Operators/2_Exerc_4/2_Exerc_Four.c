/*
---------------------------------------------------------------
Exercise 4:
---------------------------------------------------------------
Having the Height of the person defined as a constant,
Calculate your ideal weight using the following formula:


* ideal weight = 72.7 x height – 58
---------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
 
int main(){
    
    //TITLE
    printf("--------------------------------------\nLesson: Arithmetic Operators\nLanguage: C\n");
    printf("Exercise 4:\n--------------------------------------\n");

    //Step 1 -> Start the variables
    float height = 1.77;
    float ideal_weight;

    //Step 2 -> Calculate the ideal weight
    ideal_weight = 72.7 * height - 58;

    //Step 3 -> Show the result
    printf("The ideal weight for peoples with %.2f is equal %.2f\n",height,ideal_weight);

    //Finish
    printf("\nFinished...\n");
    return 0;
}