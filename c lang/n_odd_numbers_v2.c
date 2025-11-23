/*
step-1: start
step-2: print "How many odd numbers you want? "
step-3: read Count
step-4: Counter = 1
step-5: print "The first " + Count + " odd numbers are " + Counter
step-6: if ( Counter + 1 < Count * 2 - 1 ):
          Counter = Counter + 2
          print ", " + Counter 
          goto step-6
step-7: print ".\n"
step-8: stop
*/

#include <stdio.h>

int main()
{
    int count, counter;
    printf("How many odd numbers you want? ");
    scanf("%i", &count);
    counter = 1;
    printf("The first %i odd numbers are %i", count, counter);
    while ( counter + 1 < count * 2 -1 )
    {
        counter = counter + 2;
        printf(", %i", counter);
    }
    printf(".\n");

    return 0;
}