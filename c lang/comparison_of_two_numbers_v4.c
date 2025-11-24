/*
step-1: start
step-2: print "Comparison between two numbers.\n"
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num2
step-7: if ( Num1 < Num2 ):
          Num2 = Num1 + Num2
          Num1 = Num2 - Num1
          Num2 = Num2 - Num1
step-8: print Num1 + " is bigger than " + Num2 + ".\n"
step-9: stop
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
    if ( num1 < num2 )
    {
    	num2 = num1 + num2;
    	num1 = num2 - num1;
    	num2 = num2 - num1;
    }
    printf("%i is bigger than %i.\n", num1, num2);

    return 0;
}