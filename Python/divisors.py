#Create a program that asks the user for a number and then prints out a list of all the divisors of that number.

num = int(input('Please enter a number to see its divisors: ')) #asking user for inputs

a = range(1, num+1) #creating table of 1 to input

print( [x for x in a if num % x == 0]) #print all numbers that input is divisble by
