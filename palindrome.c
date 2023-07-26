#include <stdio.h>

int main ()
{
  int n, r, copy, s = 0;
  printf ("Enter the number: ");
  scanf ("%d", &n);
  copy = n;
  while (n > 0)
    {
      r = n % 10;
      s = s * 10 + r;
      n = n / 10;
    }
  if (copy == s)
    {
      printf ("The given number is a palindrome");
    }
  else
    {
      printf ("The given number is not a palindrome");
    }
  return 0;
}
