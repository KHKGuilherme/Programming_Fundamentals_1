"""
---------------------------------------------------------------
Exercise 2:
---------------------------------------------------------------
Declare two integer variables A and B and assign values
many different. Then, change the values in the form
that the variable A will have the value of the variable B, and that the
variable B will have the value of variable A. Present the
initial and final values of A and B.
---------------------------------------------------------------
"""

#TITLE
print('--------------------------------------\nLesson: Variable\nLanguage: Python')
print('Exercise 2:\n--------------------------------------')

#Step 1 -> Initialization of Variables
variable_a = 4
variable_b = 7

#Step 2 -> Show initial values of variable
print('BEFORE')
print('Variable A: %d'%(variable_a))
print('Variable B: %d'%(variable_b))

#Step 3 -> Switching the values of variables
print('\nSWITCHING...\n') 
variable_a,variable_b = variable_b,variable_a

#Step 4 -> Show variable values after switch
print('AFTER: ')
print('Variable A: %d'%(variable_a))
print('Variable B: %d'%(variable_b))


#Finish
print('Finished...\n')
