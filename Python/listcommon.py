#write a program that returns a list that contains only the elements that are common between the lists

a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89] #list 1
b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] #list 2

print( [x for x in b if x in a]) #for loop to compare lists

#extra do the above with 2 random lists of different sizes

import random
c = random.sample(range(1,100), 30) #list of 30 random numbers from 1 to 100
d = random.sample(range(1,100), 20) #list of 20 random numbers from 1 to 100

print(c) #print random lists
print(d) #print random lists

print( [x for x in d if x in c]) #compare random lists and print out similar numbers
