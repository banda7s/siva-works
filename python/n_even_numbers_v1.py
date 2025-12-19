count = int(input("How many even numbers you want? "))
counter = 0
print("The first ", count, " even numbers are ", end="")
while counter < count * 2:
    print(counter, end="")
    counter = counter + 2
    if counter < count *2:
        print(", ", end="")   
print(".")