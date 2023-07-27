#include <stdio.h>

int main ()
{
  int n, i, j, sim = 0;
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
    printf("\n");
  for (i = 0; i < n; ++i)
    {
        sim=0;
      for (j = i + 1; j < n; ++j)
	{
	  if (a[i] == a[j])
	    {
	      sim++;
	    }
	}
	if(sim==0){
	    printf("%d ",a[i]);
	}
    }

  return 0;
}