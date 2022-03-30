# Have user input name and age
# Output name and age and what year person will be 100

name = input('What is your name? ') #Asks for name
age = int(input('How old are you? ')) #Asks for age and makes "age" an integer
print('Your name is ' + name + ' and you are ' + str(age) + ' years old!') #print out of inputs, convert age to string
year = 2022 - age + 100 #equation for finding year when age is 100
print('In the year ' + str(year) + ", you'll be 100 years old") #print out of previous formula, convert year to string
