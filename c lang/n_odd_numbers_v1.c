/*
step-1: start
step-2: print "How many odd numbers you want?
step-3: read Count
step-4: Counter = 1
step-5: print "The first " + Count + " odd numbers are " + Counter
step-6: Counter = Counter + 2
step-7: if ( Counter < Count * 2):
          print ", " + Counter
          goto step-6
step-8: print ".\n"
step-9: stop
*/

#include <stdio.h>

int main ()
{
    
    int count, counter;
    printf("How many odd numbers you want? ");
    scanf("%i", &count);
    counter = 3;
    printf("The first %i even number are 1", count);
    while ( counter < count * 2 )
    {
        printf(", %i", counter);
        counter = counter + 2;
    }
    printf(".\n");

    return 0;
}