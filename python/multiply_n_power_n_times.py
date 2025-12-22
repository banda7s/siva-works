count = int(input("Enter the number to compute n power n: "))
counter = 1
result = count
print("The", count,"multiplied", count,"times is: ", end="")
while counter < count:
    counter = counter + 1
    result = result * count
print(result,".", sep="")