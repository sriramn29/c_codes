/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int n, i, j;
  printf ("Enter the number of elements: ");
  scanf ("%d", &n);
  int a[n];
  printf ("Enter the values: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("The entered array elements were: ");
  for (i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (a[i] == a[j])
	    {
	      printf ("\nThe number %d has duplicate at index position %d", a[i], j + 1);
	      break;
	    }
	}
    }

  return 0;
}
