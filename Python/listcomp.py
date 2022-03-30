#Write one line of Python that takes this list a and makes a new list that has only the even elements of this list in it.

a = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100] #given list
b = [x for x in a if x % 2 == 0] #new list base on being even

print(b) #print new list
