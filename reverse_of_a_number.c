/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

intmain ()
{
  int n, r, s = 0;
  printf ("Enter the number: ");
  scanf ("%d", &n);
  while (n > 0)
    {
      r = n % 10;
      s = s * 10 + r;
      n = n / 10;
    }
  printf ("The reverse of the number is: %d\n", s);

  return 0;
}
