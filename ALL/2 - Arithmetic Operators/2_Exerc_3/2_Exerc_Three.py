"""
---------------------------------------------------------------
Exercise 3:
---------------------------------------------------------------
Write a program with 2 variables, A and B, where A will have
the value 40 and B will have the value -1. Print the value of A+B, A-B,
AxB and A/B. Then make B increment by one
unit and repeat the 4 operations.
---------------------------------------------------------------
"""

#TITLE
print('--------------------------------------\nLesson: Arithmetic Operators\nLanguage: Python')
print('Exercise 3:\n--------------------------------------')

#Step 1 -> Start the variables (if necessary)
variable_A = 40
variable_B = -1

#Step 2 -> Perform calculations and display the results
print('AFTER:\n')

#Step 2.1 -> SUM
result = variable_A+variable_B
print('The result of the sum of Variable A(%.2f) and Variable B(%.2f) is equal %.2f'%(variable_A,variable_B,result))

#Step 2.2 -> SUBTRACTION
result = variable_A-variable_B
print('The result of the subtraction of Variable A(%.2f) and Variable B(%.2f) is equal %.2f'%(variable_A,variable_B,result))

#Step 2.3 -> MULTIPLICATION
result = variable_A*variable_B
print('The result of the multiplication of Variable A(%.2f) and Variable B(%.2f) is equal %.2f'%(variable_A,variable_B,result))

#Step 2.4 -> DIVISION
result = variable_A/variable_B
print('The result of the division of Variable A(%.2f) and Variable B(%.2f) is equal %.2f'%(variable_A,variable_B,result))


#Step 3 -> Increment variable B
print('\nIncrement Variable B')
variable_B += 1

#Step 4 -> Perform calculations and display the results

print('\nBEFORE:\n')
#Step 4.1 -> SUM
result = variable_A+variable_B
print('The result of the sum of Variable A(%.2f) and Variable B(%.2f) is equal %.2f'%(variable_A,variable_B,result))

#Step 4.2 -> SUBTRACTION
result = variable_A-variable_B
print('The result of the subtraction of Variable A(%.2f) and Variable B(%.2f) is equal %.2f'%(variable_A,variable_B,result))

#Step 4.3 -> MULTIPLICATION
result = variable_A*variable_B
print('The result of the multiplication of Variable A(%.2f) and Variable B(%.2f) is equal %.2f'%(variable_A,variable_B,result))


#Step 4.4 -> DIVISION
print('There is no division by zero')


#Finish
print('\nFinished...\n')
