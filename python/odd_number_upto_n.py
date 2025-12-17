count = int(input("Upto which number you want to print odd numbers? "))
counter = 1
print("The odd number upto ", count, " are ", counter, end="")
while counter + 1 < count:
    counter = counter + 2
    print(", ", counter, end="")
print(".")