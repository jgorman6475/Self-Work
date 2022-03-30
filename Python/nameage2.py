# Have user input name and age
# Output name and age and what year person will be 100

#extra work
#ask user for another number and print string that many times
#have each string on a new line

name = input('What is your name? ') #Asks for name
age = int(input('How old are you? ')) #Asks for age and makes "age" an integer
year = 2022 - age + 100 #equation for finding year when age is 100
repeat = int(input('How many times to repeat message? ')) #extra: ask user how many times to repeat message
print(('Your name is ' + name + ' and you are ' + str(age) + ' years old! In the year ' + str(year) + ", you'll be 100 years old\n") * repeat)
#print out of inputs, previous formula, convert year to string convert age to string
#extra: add new line with /n and multiple string by repeat input number
 
