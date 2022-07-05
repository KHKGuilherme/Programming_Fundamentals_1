/*
---------------------------------------------------------------
Exercise 2:
---------------------------------------------------------------
Declare two integer variables A and B and assign values
many different. Then, change the values in the form
that the variable A will have the value of the variable B, and that the
variable B will have the value of variable A. Present the
initial and final values of A and B.
---------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
 


int main(){
    
    //TITLE
    printf("--------------------------------------\nLesson: Variable\n\n");
    printf("Exercise 2:\n--------------------------------------\n");

    //Step 1 -> Initialization of Variables
    int variable_a = 4;
    int variable_b = 7;

    //Step 2 -> Show initial values of variable 
    printf("BEFORE:\n");
    printf("Variable A: %d\n",variable_a);
    printf("Variable B: %d\n",variable_b);

    //Step 3 -> Switching the values of variables 
    printf("\nSWITCHING...\n\n");
    int copy_a = variable_a;
    variable_a = variable_b;
    variable_b = copy_a;
    
    //Step 4 -> Show variable values after switch
    printf("AFTER:\n");
    printf("Variable A: %d\n",variable_a);
    printf("Variable B: %d\n",variable_b);

    //Finish
    printf("Finished...\n\n");
    return 0;
}