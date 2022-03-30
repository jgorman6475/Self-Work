#take a list and write a program that prints out all the elements of the list that are less than 5.

a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89] #initial table

for x in a:
    if x<5: print(x) #for loop

print( [x for x in a if  x<5] ) #single line for loop

num = int(input('Insert a number: ')) #ask user for input
for x in a:
    if x<num: print(x) #for loop for input number

print( [x for x in a if x<num] ) #single line for input number
