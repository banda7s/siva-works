limit = int(input("Upto which number you want to compute in n power n series? "))
print(f"n power n series upto {limit} are: 1", end="")
count = 2
product = count
counter = 1
while (product <= limit):
    product = count
    counter = 1
    while (counter < count):
        product = product * count
        counter += 1
    if (product <= limit):
        print(f", {product}", end="")
    count += 1

print(".")