/*
step-1: start
step-2: print "Which table you want to print? "
step-3: read Count
step-4: print "The multiple of " + Count + " is: \n"
step-5: Counter = 1
step-6: Multiple = Count * Counter
step-7: if (Counter <= 10):
          print Count + " X " + Counter + " = " + Multiple + ".\n"
          Counter = Counter + 1
          goto step-6
step-8: stop
*/

#include <stdio.h>

int main()
{
	int count, counter, multiple;
	printf("Which table you want to print? ");
	scanf("%i", &count);
	printf("The multiple of %i is: \n", count);
	counter = 1;
	while ( counter <= 10)
	{
		multiple = count * counter;
		printf("%i x %i = %i .\n", count, counter, multiple);
		counter = counter + 1;
	}

	return 0;
}