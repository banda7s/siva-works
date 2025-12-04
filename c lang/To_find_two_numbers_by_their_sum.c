/*
step-1: start
step-2: print "To find two numbers by their sum and product?\n"
step-3: print "Enter their Sum: "
step-4: read Sum
step-5: print "Enter their product: "
step-6: read Product
step-7: Num1 = 1
step-8: Num2 = Sum - 1
step-9: if (Num1 == Sum):
          goto step-11
step-10: if (Num1 + Num2 == Sum):
           Num1 = Num1 + 1
           Num2 = Num2 - 1
           if (Num1 * Num2 == Product): 
             print "Sum of two number is " + Sum + ", " + "Product of those two numbers is " + Product + "." + "The numbers are " + Num1 + " and " + Num2 + ".\n"
             goto step-12
           goto step-9
step-11: print "There are no integers who sum is " + Sum + " and Product is " + Product + ".\n"
step-12:stop
*/

#include <stdio.h>

int main()
{
	int sum, product, num1, num2;
	printf("To find two numbers by their sum and product?\n");
	printf("Enter their sum: ");
	scanf("%i", &sum);
	printf("Enter their product: ");
	scanf("%i", &product);
	num1 = 1;
	num2 = sum - 1;
	if ( num1 == sum )
	{
		printf("There are no integers who sum is %i and product is %i .\n", sum, product);
	}
	if ( num1 + num2 == sum)
	{
		num1 = num1 + 1;
		num2 = num2 - 1;
		if( num1 * num2 == product)
		{
			printf("sum of two number is %i product of those two numbers is %i. The numbers are %i and %i.\n", sum, product, num1, num2);
		}
		printf("There are no integers who sum is %i and product is %i .\n", sum, product);
	}

	return 0;
}