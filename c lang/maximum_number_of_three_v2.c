/*
step-1: start
step-2: print "To find maximum number of three?\n"
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num2
step-7: print "Enter the third number: "
step-8: read Num3
step-9: Big = Num1
step-10: if (Num2 > Big):
           Big = Num2
step-11: if (Num3 > Big):
           Big = Num3
step-12: print "The greatest number of " + Num1 + ", " + Num2 + " and " + Num3 + " is " + Big + ".\n"
step-13: stop
*/

#include <stdio.h>

int main()
{
	int num1, num2, num3, big;
	printf("To find maximum number of three?\n");
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	printf("Enter the third number: ");
	scanf("%i", &num3);
	big = num1;
	if ( num2 > big )
	{
		big = num2;
	}
	if ( num3 > big )
	{
		num3 = big;
	}
	printf("The greatest number of %i, %i and %i is %i.\n", num1, num2, num3, big);
	
	return 0;
}