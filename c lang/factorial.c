/*
step-1: start
step-2: print "Enter the valve of factorial: "
step-3: read Num
step-4: Counter = Num
step-5: print "The value of " + Num + " factorial is: "
step-6: if ( Counter > 1 ):
          Counter = Counter - 1
          Num = Num * Counter
          goto step-6
step-7: print Num + ".\n"
step-8: stop
*/

#include <stdio.h>

int main()
{
	int num, counter;
	printf("Enter the valve of factorial: ");
	scanf("%i", &num);
	counter = num;
	printf("The value of %i factorial is: ", num);
	while ( counter > 1)
	{
		counter = counter - 1;
		num = num * counter;
	}
	printf("%i .\n", num);

	return 0;
}