count = int(input("How many odd numbers you want? "))
counter = 1
print("The first", count,"odd numbers are", counter, end="")
while counter + 1 < count * 2 - 1:
    counter = counter + 2
    print(",", counter, end="")
print(".")