#Print numbers 1-50

print('Numbers 1 to 50')
for n in range(1, 51):
    if n % 3 == 0 and n % 7 == 0:
        print('CloudComputing')
    elif n % 3 == 0:
        print('Cloud')
    elif n % 7 == 0:
        print('Computing')
    else:
        print(n, end=' ')
