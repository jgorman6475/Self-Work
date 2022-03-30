#ask user for 2 numbers then see if first number is divisible by second number

num = int(input('Please input first number: ')) #asking for numerator
check = int(input('Please input second number: ')) #asking for denominator

if num % check == 0: #if function to check if divisible
    print(str(num) + ' is divisible by ' + str(check)) #print out if statement is true
else:
    print(str(num) + ' is not divisble by ' + str(check)) #print out if statement is false
