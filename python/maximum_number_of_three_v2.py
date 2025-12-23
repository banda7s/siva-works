print("To find maximum number of three?")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num3 = int(input("Enter the third number: "))
big = num1
if num2 > big:
    big = num2
if num3 > big:
    big = num3
print("The greatest number of ", num1, ", ", num2, " and ", num3, " is ", big, ".", sep="")