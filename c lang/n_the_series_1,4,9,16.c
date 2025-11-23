/*
step-1: start
step-2: print "How many square numbers you want? "
step-3: read Count
step-4: Counter = 1
step-5: print "The square numbers upto " + Count + " are: " + Counter
step-6: if ( Counter < Count):
          Counter = Counter + 1
          print ", " + ( Counter * Counter )
          goto step-6
step-7: print ".\n"
step-8: stop
*/

#include <stdio.h>

int main ()
{
    int count, counter;
    printf("How many square numbers you want? ");
    scanf("%i", &count);
    counter = 1;
    printf("The square numbers upto %i count are: %i", count, counter);
    while ( counter < count)
    {
        counter = counter + 1;
        printf(", %i", counter * counter);
    }
    printf(".\n");

    return 0;
}
