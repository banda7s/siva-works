/*
step-1: start
step-2: print "To find maximum number of three?\n"
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num2
step-7: print "Enter the third number: "
step-8: read Num3
step-9: if (Num2 > Num1):
          Big = Num2
          Num2 = Num1
          Num1 = Big
step-10: if (Num3 > Num1):
           Bigger = Num3
           Num3 = Num1
           Num1 = Bigger
step-11: print "The greatest number of " + Num1 + ", " + Num2 + " and " + Num3 + " is " + Num1 + ".\n"
step-12: stop
*/

#include <stdio.h>

int main()
{
	int num1, num2, num3, big, bigger;
	printf("To find maximum number of three?\n");
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	printf("Enter the third number: ");
	scanf("%i", &num3);
	if ( num2 > num1 )
	{
		 big = num2;
         num2 = num1;
         num1 = big;
    }
	if ( num3 > num1 )
	{
    	bigger = num3;
        num3 = num1;
        num1 = bigger;
    }
    printf("The greatest number of %i, %i and %i is %i.\n", num1, num2, num3, num1);

    return 0;
}