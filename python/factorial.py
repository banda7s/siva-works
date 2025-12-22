num = int(input("Enter the valve of factorial: "))
counter = num
print("The value of", num,"factorial is: ", end="")
while counter > 1:
    counter = counter - 1
    num = num * counter
print(num,".", sep="")
