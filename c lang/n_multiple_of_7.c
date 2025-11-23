/*
step-1: start
step-2: print "How many multiple of 7 you want? "
step-3: read Count
step-4: Multiple = 7
step-5: print "The first " + Count + " multiple of 7 is: " + Multiple
step-6: Counter = Count * Multiple
step-7: if (Multiple < Counter):
          Multiple = Multiple + 7
          print ", " + Multiple
          goto step-7
step-8: print ".\n"
step-9: stop
*/

#include <stdio.h>

int main ()
{
    int count, multiple, counter;
    printf("How many multiple of 7 you want? ");
    scanf("%i", &count);
    multiple = 7;
    printf("The first %i multiple of 7 is: %i", count, multiple);
    counter = count * multiple;
    while ( multiple < counter )
    {
        multiple = multiple + 7;
        printf(", %i", multiple);
    }
    printf(".\n");

    return 0;
}