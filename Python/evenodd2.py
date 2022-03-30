#Have user input a number and determine if number is even or odd

#extra work, print out a different message if divisble by 4

number = int(input('Please enter a number: ')) #asks for user to input a number

if number % 4 == 0: #beginning of if statement
    print('Number is divisble by 4. Special Even here!!') #extra: check for number divisible by 4 for special case
elif number % 2 == 0:
    print('Number is even!') #if number is divisble by 2 making it even
else:
    print('Number is odd!') #if above is false, prints odd
