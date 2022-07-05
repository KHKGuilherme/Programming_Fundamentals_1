"""
---------------------------------------------------------------
Exercise 1:
---------------------------------------------------------------
Write a program to determine the number of liters
of fuel on a trip by car that
makes 12 km/litre. For this, it is known that the time spent on the trip
is 35 min and the average car speed is 80 km/h.
---------------------------------------------------------------
"""

#TITLE
print('--------------------------------------\nLesson: Arithmetic Operators\nLanguage: Python')
print('Exercise 1:\n--------------------------------------')

#Step 1 -> Find out the travelled distance
travelled_distance = (80/60)*35

#Step 2 -> Find out the quantity of liters spent
liters_spent = travelled_distance/12

#Step 3 -> Display the quantity of liters spent
print('The quantity of liters spent is equal %.2f liters\n'%(liters_spent));

#Finish
print('Finished...\n')
