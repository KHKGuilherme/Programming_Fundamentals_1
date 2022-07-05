/*
---------------------------------------------------------------
Exercise 3:
---------------------------------------------------------------
Write a program with 2 variables, A and B, where A will have
the value 40 and B will have the value -1. Print the value of A+B, A-B,
AxB and A/B. Then make B increment by one
unit and repeat the 4 operations.
---------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
 
int main(){
    
    //TITLE
    printf("--------------------------------------\nLesson: Arithmetic Operators\nLanguage: C\n");
    printf("Exercise 3:\n--------------------------------------\n");

    //Step 1 -> Start the variables
    float variable_A = 40;
    float variable_B = -1;
    float result;
    
    //Step 2 -> Perform calculations and display the results
    printf("AFTER: \n\n");
    
    //Step 2.1 -> SUM
    result = variable_A+variable_B;
    printf("The result of the sum of Variable A(%.2f) and Variable B(%.2f) is equal %.2f\n",variable_A,variable_B,result);
    
    //Step 2.2 -> SUBTRACTION
    result = variable_A-variable_B;
    printf("The result of the subtraction of Variable A(%.2f) and Variable B(%.2f) is equal %.2f\n",variable_A,variable_B,result);
    
    //Step 2.3 -> MULTIPLICATION
    result = variable_A*variable_B;
    printf("The result of the multiplication of Variable A(%.2f) and Variable B(%.2f) is equal %.2f\n",variable_A,variable_B,result);
    
    //Step 2.4 -> DIVISION
    result = variable_A/variable_B;
    printf("The result of the division of Variable A(%.2f) and Variable B(%.2f) is equal %.2f\n",variable_A,variable_B,result);


    //Step 3 -> Increment variable B
    printf("\nIncrement Variable B  \n");
    variable_B++;


    //Step 4 -> Perform calculations and display the results
    printf("\nBEFORE: \n\n");
    
    //Step 4.1 -> SUM
    result = variable_A+variable_B;
    printf("The result of the sum of Variable A(%.2f) and Variable B(%.2f) is equal %.2f\n",variable_A,variable_B,result);
    
    //Step 4.2 -> SUBTRACTION
    result = variable_A-variable_B;
    printf("The result of the subtraction of Variable A(%.2f) and Variable B(%.2f) is equal %.2f\n",variable_A,variable_B,result);
    
    //Step 4.3 -> MULTIPLICATION
    result = variable_A*variable_B;
    printf("The result of the multiplication of Variable A(%.2f) and Variable B(%.2f) is equal %.2f\n",variable_A,variable_B,result);

    //Step 4.4 -> DIVISION
    printf("There is no division by zero\n");

    //Finish
    printf("\nFinished...\n");
    return 0;
}