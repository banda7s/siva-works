print("To check a number is prime or not?")

Count = int(input("Enter a number: "))

if Count == 1:
    print(Count, "is not prime number.")
elif Count == 2:
    print(Count, "is prime number.")
else:
    TableNumber = 2

    while TableNumber < Count:
        Multiple = 2
        Counter = TableNumber * Multiple

        while Counter <= Count:
            if Counter == Count:
                print(Count, "is not prime number.")
                break
            Multiple = Multiple + 1
            Counter = TableNumber * Multiple

        if Counter == Count:
            break

        TableNumber = TableNumber + 1
    else:
        print(Count, "is prime number.")
