/*
---------------------------------------------------------------
Exercise 1:
---------------------------------------------------------------
Write a program to determine the number of liters
of fuel on a trip by car that
makes 12 km/litre. For this, it is known that the time spent on the trip
is 35 min and the average car speed is 80 km/h.
---------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
 
int main(){
    
    //TITLE
    printf("--------------------------------------\nLesson: Arithmetic Operators\nLanguage: C\n");
    printf("Exercise 1:\n--------------------------------------\n");

    //Step 1 -> Find out the travelled distance
    float travelled_distance = ((float)80/60)*35;

    //Step 2 -> Find out the quantity of liters spent
    float liters_spent = travelled_distance/12; 

    //Step 3 -> Display the quantity of liters spent
    printf("The quantity of liters spent is equal %.2f liters\n\n",liters_spent);

    //Finish
    printf("Finished...\n");
    return 0;
}