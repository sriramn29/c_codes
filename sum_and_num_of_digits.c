#include <stdio.h>

int
main ()
{
  int n, r, choice, count = 0, sum = 0;
  printf ("Enter a number: ");
  scanf ("%d", &n);
  printf ("Enter the operation to be done (sum = 1 or len = 2): ");
  scanf ("%d", &choice);
  switch (choice)
    {
    case 1:
      while (n > 0)
	{
	  n = n / 10;
	  count = count + 1;
	}
      printf ("The number of digits is: %d\n", count);
      break;
    case 2:
      while (n > 0)
	{
	  r = n % 10;
	  sum = sum + r;
	  n = n / 10;
	}
      printf ("The sum of the digits is: %d\n", sum);
      break;
    default:
      printf ("Invalid option");
    }
}
