/*
step-1: start
step-2: print "Enter the number to compute n power n: "
step-3: read Count
step-4: Counter = 1
step-5: Result = Count
step-6: print "The " + Count + " Multiplied " + Count + " times is: "
step-7: if ( Counter < Count ):
          Counter = Counter + 1
          Result = Result * Count
          goto step-7
step-8: print Result + ".\n"
step-9: stop
*/

#include <stdio.h>

int main()
{
	int count, counter, result;
	printf("Enter the number to compute n power n: ");
	scanf("%i", &count);
	counter = 1;
	result = count;
	printf("The %i multiplied %i times is: ", count, count);
	while ( counter < count)
	{
		counter = counter + 1;
		result = result * count;
	}
	printf("%i .\n", result);

	return 0;
}