/*
step-1: start
step-2: print " Comparison between two numbers.\n"
step-3: print " Enter the first number: "
step-4: read Num1
step-5: print " Enter the second number: "
step-6: read Num2
step-7: Big = " is bigger than "
step-8: if ( Num1 > Num2 ):
          print Num1 + Big + Num2 + ".\n"
step-9: if ( NUM2 > Num1 ):
          print Num2 + Big + Num1 + ".\n"
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
	if ( num1 > num2 )
	{
		printf("%i is bigger than %i.\n", num1, num2);
	}
	if (num2 > num1)
	{
		printf("%i is bigger than %i.\n", num2, num1);
	}

	return 0;
}