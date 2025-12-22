count = int(input("How many square numbers you want? "))
counter = 1
print("The square numbers upto", count,"are:", counter, end="")
while counter < count:
    counter = counter + 1
    print(",", (counter * counter), end="")
print(".")