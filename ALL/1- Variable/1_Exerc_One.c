/*
---------------------------------------------------------------
Exercise 1:
---------------------------------------------------------------
Write a program that displays your name on the first
line and your second email. Then display a
message asking the user to press a key.
When the user presses, display on a new line the name
of your friend and, in another, his e-mail.
---------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>



int main(){
    
    //TITLE
    printf("--------------------------------------\nLesson: Variable\n\n");
    printf("Exercise 1:\n--------------------------------------\n");

    //Step 1 -> Show your name
    printf("Name: Guilherme Fontes\n");

    //Step 2 -> Show your e-mail
    printf("E-mail: guilhermehenriquefontes@alunos.utfpr.edu.br\n\n");

    //Step 3 -> Wait a key to proceed
    printf("Press a key to continue...\n");
    getchar();

    //Step 4 -> show your colleague's name
    printf("Name: Bruno Uhlmann Marcato\n");
    
    //Step 5 -> show your colleague's email
    printf("E-mail: marcato.2001@alunos.utfpr.edu.br\n\n");
    
    //Finish
    printf("Finished...\n\n");
    return 0;
}