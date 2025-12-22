count = int(input("Upto which number you want to print the series? "))
print("The series of square numbers is: 1", end="")
counter = 2
square = counter * counter
while square <= count:
    print(",", square, end="")
    counter = counter + 1
    square = counter * counter
print(".")
