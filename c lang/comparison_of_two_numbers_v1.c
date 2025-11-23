/*
step-1: start
step-2: print "Comparison between two numbers.\n"
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print " Enter the second number: "
step-6: read Num2
step-7: if ( Num1 > Num2 ):
          print Num1 + " is greater than " + Num2
step-8: if ( NUM2 > Num1 ):
          print Num2 + " is greater than " + Num1
step-9: print ".\n"
step-10: stop 
*/

#include <stdio.h>

int main()
{
	int num1, num2;
	printf("Comparison between two numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	if ( num1 > num2)
	{
		printf("%i is greater than %i", num1, num2);
	}
	if ( num2 > num1 )
	{
		printf("%i is greater than %i", num2, num1);
	}
	printf(".\n");

	return 0;
}