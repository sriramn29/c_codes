/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int n, r, sum = 0, copy;
  printf ("Enter a number: ");
  scanf ("%d", &n);
  copy = n;
  while (n > 0)
    {
      r = n % 10;
      sum = sum + (r * r * r);
      n = n / 10;
    }
  if (copy == sum)
    {
      printf ("%d is a Armstrong number!!", copy);
    }
  else
    {
      printf ("%d is not a Armstrong number", copy);
    }

  return 0;
}
