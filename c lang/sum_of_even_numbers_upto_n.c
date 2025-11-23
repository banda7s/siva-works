/*
step-1: start
step-2: print "How many even numbers you want to add? "
step-3: read Count
step-4: Counter = 0
step-5: Sum = 0
step-6: if ( Counter < Count * 2 ):
          Sum = Sum + Counter
          Counter = Counter + 2
          goto step-6
step-7: print "The sum of " + Count + " even numbers is: " + Sum + ".\n"
step-8: stop
*/

#include <stdio.h>

int main()
{
	int count, counter, sum;
	printf("How many even numbers you want to add? ");
	scanf("%i", &count);
	counter = 0;
	sum = 0;
	while ( counter < count * 2)
	{
		sum = sum + counter;
		counter = counter + 2;
	}
	printf("The sum of %i even numbers is: %i.\n", count, sum);

	return 0;
}