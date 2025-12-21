print("The multiple of 20 tables.")
tablenumber = 1
multiple = 1
while tablenumber <= 20:
    while multiple <= 10:
        print(tablenumber,"X", multiple,"=", (tablenumber * multiple))
        multiple = multiple + 1
    print()
    tablenumber = tablenumber + 1
    multiple = 1 