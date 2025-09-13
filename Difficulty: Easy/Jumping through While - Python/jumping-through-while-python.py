def printIncreasingPower(x):
    i = 1
    # Loop while square is within limit
    while i * i <= x:
        print(i * i, end=" ")
        i += 1
