/*
step-1: start
step-2: print "To check a number is prime or not?\n"
step-3: print " Enter a number: "
step-4: read Count 
step-5: if ( Count = 1 ):
          print Count + " is not prime number.\n"
step-6: if ( Count = 2 ):
          print Count + " is prime number.\n"
step-7: TableNumber = 2
step-8: Multiple = 2
step-9: Counter = TableNumber * Multiple
step-10: if ( Counter <= Count ):
           Multiple = Multiple + 1
           if ( Counter = Count ):
             print Count + " is not prime number.\n"
             goto step-14
           goto step-9
step-11: TableNumber = Tablenumber + 1
step-12: if ( TableNumber <= Count ):
           goto step-8
step-13: if ( Counter != Count):
           print Count + " is prime number.\n"
step-14: stop
*/


#include <stdio.h>

int main()
{
	int count, counter, tablenumber, multiple;
	printf("To check a number is prime or not?\n");
	printf("Enter a number: ");
	scanf("%i", &count);
	if ( count == 1 )
	{
		printf("%i is not prime number.\n", count);
	}
	
	tablenumber = 2;
	START:
	multiple = 2;
	counter = tablenumber * multiple;
	while( counter <= count )
	{
		multiple = multiple + 1;
		if ( counter == count )
		{
			printf("%i is not prime number.\n", count);
			goto EXIT;
		}
		counter = tablenumber * multiple;
	}
	tablenumber = tablenumber + 1;
	if( tablenumber <= count )
	{
		goto START;
	}
	if ( counter != count )
	{
		printf("%i is prime number.\n", count);
	}
	EXIT:

	return 0;
}