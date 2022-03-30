#Ask the user for a string and print out whether this string is a palindrome or not.

word = input('Input a word to test if a palindrome: ') #ask for input
word = str(word) #convert input to string
pal = word[::-1] #invert string

if pal == word: #test if invert of input is same or not
    print('Word is a palindrome!')
else:
    print('Word is not a palindrome.')
