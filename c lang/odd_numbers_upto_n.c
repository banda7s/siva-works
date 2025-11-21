/*
step-1: start
step-2: print "Upto which number you want to print odd numbers? "
step-3: read Count
step-4: Counter = 1
step-5: print "The odd number upto " + Count + " are " + Counter
step-6: if ( Counter + 1 < Count )
          Counter = Counter + 2
          print ", " + Counter
          goto step-6
step-7: print ".\n"
step-8: stop
*/

#include <stdio.h>

int main ()
{
    int count, counter;
    printf("Upto which number you want to print odd numbers? ");
    scanf("%i", &count);
    counter = 1;
    printf("The odd number upto %i are %i", count, counter);
    while ( counter + 1 < count)
    {
        counter = counter + 2;
        printf(", %i", counter);
    }
    printf(".\n");

    return 0;
}