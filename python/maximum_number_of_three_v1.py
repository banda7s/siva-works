print("To find maximum number of three?")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num3 = int(input("Enter the third number: "))
if num2 > num1:
    big = num2
    num2 = num1
    num1 = big
if num3 > num1:
    bigger = num3
    num3 = num1
    num1 = bigger
print("The greatest number of ", num1, ", ", num2, " and ", num3, " is ", num1, ".", sep="")