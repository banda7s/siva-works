count = int(input("How many odd numbers you want? "))
counter = 1
print("The first", count, "odd numbers are ", end="")
while counter < count * 2:
    print(counter, end="")
    counter = counter + 2
    if counter < count *2:
        print(", ", end="")   
print(".")