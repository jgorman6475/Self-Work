#Have user input a number and determine if number is even or odd

number = int(input('Please enter a number: ')) #asks for user to input a number

if number % 2 == 0: #beginning of if statement
    print('Number is even!') #if number is divisble by 2 making it even
else:
    print('Number is odd!') #if above is false, prints odd
