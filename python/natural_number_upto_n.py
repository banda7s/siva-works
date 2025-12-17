count = int(input("Upto which number you want to print natural numbers? "))
print("The natural numbers upto ", count, " are: ")

counter = 1
while counter < count:
    print(counter, ", ", end="")
    counter = counter + 1

print(counter, ".")
