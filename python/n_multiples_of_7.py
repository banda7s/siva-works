count = int(input("How many multiples of 7 you want? "))
multiple = 7
print("The first", count,"multiples of 7 is:", multiple, end="")
counter = count * multiple
while multiple < counter:
    multiple = multiple + 7
    print(",", multiple, end="")
print(".")