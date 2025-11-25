/*
step-1: start
step-2: print "The multiple of 20 tables.\n"
step-3: TableNumber = 1
step-4: Multiple = 1
step-5: if (Multiple <= 10):
          print TableNumber + " X " + Multiple + " = " + (TableNumber * Multiple) + "\n"
          Multiple = Multiple + 1
          goto step-5
step-6: print "\n"
step-7: TableNumber = TableNumber + 1
step-8: if (TableNumber <= 20):
          goto step-4
step-9: stop
*/

#include <stdio.h>

int main()
{
	int tablenumber, multiple;
	printf("The multiple of 20 tables.\n");
	tablenumber = 1;
	multiple = 1;
	while ( tablenumber <= 20 )
	{
		while ( multiple <= 10 )
		{
			printf("%i x %i = %i\n", tablenumber, multiple, tablenumber * multiple);
			multiple = multiple + 1;
		}
		tablenumber = tablenumber + 1;
		multiple =1;
		printf("\n");
	}

	return 0;
}