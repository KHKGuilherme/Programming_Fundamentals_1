"""
---------------------------------------------------------------
Exercise 2:
---------------------------------------------------------------
A savings account was opened with a
deposit of BRL 500.00. Imagine that this account is remunerated
at 1% interest per month. What will be the account value after three
months?
---------------------------------------------------------------
"""

#TITLE
print('--------------------------------------\nLesson: Arithmetic Operators\nLanguage: Python')
print('Exercise 2:\n--------------------------------------')

#Step 1 -> Start the necessary variables
#NOT NECESSARY

#Step 2 -> Calculate the value of the account, considering the 3 months of remuneration
value_account = 500*(1.01**3)

#Step 3 -> Display the value of account after tree mounth
print('The value of account after three mounth is equal %.2f\n'%(value_account))

#Finish
print('Finished...\n')
