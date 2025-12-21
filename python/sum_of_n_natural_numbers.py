count = int(input("How many natural numbers you want to add? "))
counter = 1
sum = 0
while counter <= count:
    sum = sum + counter
    counter = counter + 1
print("The sum of", count,"natural numbers is:", sum, end="")
print(".")