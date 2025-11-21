/*
step-1: start
step-2: print "Upto which number you want to print even numbers? "
step-3: read Count
step-4: Counter = 0
step-5: print "The Even numbers upto " + Count + " are " + Counter
step-6: if ( Counter + 1 < Count ):
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
    printf("Upto which number you want to print even numbers? ");
    scanf("%i", &count);
    counter = 0;
    printf("The Even numbers upto %i are %i", count, counter);
    while ( counter + 1 < count )
    {
        counter = counter + 2;
        printf(", %i", counter);
    }
    printf(".\n");

    return 0;
}
