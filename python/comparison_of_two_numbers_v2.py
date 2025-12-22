print("Comparison between two numbers.")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
if num2 > num1:
    big = num2
    num2 = num1
    num1 = big
print(num1," is bigger than ", num2,".", sep="")