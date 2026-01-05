print(f"To find two numbers by their sum and product?")
total = int(input("Enter their sum: "))
product = int(input("Enter their product: "))
num1 = 1
while (num1 < total):
  num2 = total - num1
  if (num1 * num2 == product):
    print(f"Sum of two number is {total}, product of those two numbers is {product}. The numbers are {num1} and {num2}.")
    break
  num1 += 1
else:
  print(f"There are no integers who sum is {total} and product is {product}.")
