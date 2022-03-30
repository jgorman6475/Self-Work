#Generate a random number between 1 and 9.
#Ask the user to guess the number
#Tell them whether they guessed too low, too high, or exactly right.

import random

a = random.randint(1,9) #creates number
pa = '.' #check for while statement
while pa != 'exit': #while statement to replay
    num = int(input('Please guess a number between 1 and 9: ')) #user input of guess
    if num > a:
        print('Too Large.')
        pa = input('Press enter or type exit to quit: ').lower
    elif num < a:
        print('Too Small.')
        pa = input('Press enter or type exit to quit: ').lower
    elif num == a:
        print('You guessed correctly!')
        pa = input('Type exit to play again! ')

print('Thank you for playing!')
