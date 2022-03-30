#Print numbers 1-50

print('Numbers 1 to 50') #prints all numbers from 1 - 50
for n in range(1, 51): #gives range to print
    if n % 3 == 0 and n % 7 == 0:
        print('CloudComputing') #if number is divisble by 3 and 7 print CloudComputing
    elif n % 3 == 0:
        print('Cloud') #If number is divisible by 3 print Cloud
    elif n % 7 == 0:
        print('Computing') #if number is divisible by 7 print Computing
    else:
        print(n, end=' ') #if number isn't divisble by 3 or 7 print number
