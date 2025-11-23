/*
step-1: start
step-2: print "How many natural number you want to add? "
step-3: read Count
step-4: Counter = 1
step-5: Sum = 0
step-6: print "The sum of " + Count + " natural numbers is: "
step-7: if (Counter <= Count ):
          Sum = Sum + Counter
          Counter = Counter + 1
          goto step-7
step-8: print Sum + ".\n"
step-9: stop
*/

#include <stdio.h>

int main ()
{
    int count, counter, sum;
    printf("How many natural numbers you want to add? ");
    scanf("%i", &count);
    counter = 1;
    sum = 0;
    printf("the sum of %i natural number is: ", count);
    while ( counter <= count )
    {
        sum = sum + counter;
        counter = counter + 1;
    }
    printf("%i .\n", sum);

    return 0;
}