count = int(input("Which table you want to print? "))
print("The multiple of", count, "is:")
counter = 1
while counter <= 10:
    multiple = count * counter
    print(count,"X", counter, "=", multiple)
    counter = counter + 1