#Make a two-player Rock-Paper-Scissors game.

p1 = input('Input Name for Player 1: ') #name for player 1
p2 = input('Input Name for PLayer 2: ') #name for player 2
pa = '.' #check for while statement
while pa != 'no': #while statement to replay
    p1a = input("%s, do yo want to choose rock, paper or scissors? " % p1).lower() #input of choice for p1
    p2a = input("%s, do yo want to choose rock, paper or scissors? " % p2).lower() #input of choice for p2
    def compare(u1, u2): #compare statement
        if u1 == u2:
            return("It's a tie!")
        elif u1 == 'rock':
            if u2 == 'scissors':
                return(p1 + " wins!")
            else:
                return(p2 + " wins!")
        elif u1 == 'scissors':
            if u2 == 'paper':
                return(p1 + " win!")
            else:
                return(p2 + " wins!")
        elif u1 == 'paper':
            if u2 == 'rock':
                return(p1 + " wins!")
            else:
                return(p2 + " win!")
        else:
            return("Invalid input! You have not entered rock, paper or scissors, try again.").lower()
    print(compare(p1a, p2a)) #prints winner of game
    pa = input('Do you want to play again? Please enter Yes or No: ').lower() #prompt for replay of game

print('Thank you for playing!')
