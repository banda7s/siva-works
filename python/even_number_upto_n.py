count = int(input("Upto which number you want to print even numbers? "))
counter = 0
print("The even numbers upto ", count, " are ", counter, end="")
while counter + 1 < count:
    counter = counter + 2
    print(", ", counter, end="")
print(".\n")