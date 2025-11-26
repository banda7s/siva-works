/*
step-1: start
step-2: print "Upto which number you want to compute in n power n series? "
step-3: read Limit
step-4: print "n power n series upto " + Limit + " are: 1"
step-5: Count = 2
step-6: Counter = 1
step-7: Product = Count
step-8: if ( Counter < Count ):
          Product = Product * Count
          Counter = Counter + 1
          goto step-8
step-9: if ( Product <= Limit):
          print ", " + Product
          Count = Count + 1
          goto step-6
step-10: print ".\n"
step-11: stop
*/

#include <stdio.h>

int main()
{
  int limit, count, counter, product;
  printf("Upto which number you want to compute in n power n series? ");
  scanf("%i", &limit);
  printf("n power n series upto %i are: 1", limit);
  count = 2;
  product = count;
  while ( product <= limit )
  {
    product = count;
    counter = 1;
    while( counter < count )
    {
      product = product * count;
      counter = counter + 1;
    }
    if ( product <= limit )
    {
      printf(", %i", product);
      count = count + 1;
    }
  }
  printf(".\n");

  return 0;
}