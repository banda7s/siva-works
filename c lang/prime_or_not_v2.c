/*
step-1: start 
step-2: print "To check a number is prime or not?\n"
step-3: print "Enter a number: "
step-4: read Count 
step-5: if (Count == 1):
          print Count + " is not prime number.\n"
step-6: if (Count == 2):
          print Count + " is prime number.\n"
step-7: TableNumber = 2
step-8: if (Count % TableNumber == 0):
          print Count + " is not prime number.\n"
          goto step-10
step-9: if (Count % TableNumber != 0):
          TableNumber = TableNumber + 1
          if ( TableNumber <= ( Count - 1)):
            goto step-8
          print Count + " is prime number.\n"
step-10: stop
*/

#include <stdio.h>

int main()
{
	int count, tablenumber;
	printf("To check a number is prime or not?\n");
	printf("Enter a number: ");
	scanf("%i", &count);
	if ( count == 1 )
	{
		printf("%i is not prime number.\n", count);
	}
	if ( count == 2 )
	{
		printf("%i is prime number.\n", count);
		goto EXIT;
	}
	tablenumber = 2;
	START:
	if ( count % tablenumber == 0 )
	{
		printf("%i is not prime number.\n", count);
		goto EXIT;
	}
	if ( count % tablenumber != 0)
	{
		tablenumber = tablenumber + 1;
		if( tablenumber <= ( count - 1))
		{
			goto START;
		}
		printf("%i is prime number.\n", count);
	}
EXIT:	

	return 0;
}