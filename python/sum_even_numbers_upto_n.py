count = int(input("How many even numbers you want to add? "))
counter = 0
sum = 0
while counter < count * 2:
    sum = sum + counter
    counter = counter + 2
print("The sum of ", count," even numbers is: ", sum,".", sep="")