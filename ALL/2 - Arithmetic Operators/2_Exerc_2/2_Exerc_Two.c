/*
---------------------------------------------------------------
Exercise 2:
---------------------------------------------------------------
A savings account was opened with a
deposit of BRL 500.00. Imagine that this account is remunerated
at 1% interest per month. What will be the account value after three
months?
---------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    
    //TITLE
    printf("--------------------------------------\nLesson: Arithmetic Operators\nLanguage: C\n");
    printf("Exercise 2:\n--------------------------------------\n");

    //Step 1 -> Start the necessary variables
    float value_account;

    
    //Step 2 -> Calculate the value of the account, considering the 3 months of remuneration
    value_account = 500*pow(1+0.01,3);

    //Step 3 -> Display the value of account after tree mounth
    printf("The value of account after three mounth is equal %.2f\n\n",value_account);

    //Finish
    printf("Finished...\n");
    return 0;
}