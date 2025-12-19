count = int(input("How many even numbers you want? "))
counter = 0
print("The first ", count, " even numbers are ", counter, end="")
while counter + 1 < count * 2 - 1:
    counter = counter + 2
    print(",", counter, end="")
print(".")