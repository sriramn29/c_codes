/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,count = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count=count+1;
    }
    printf("The number of digits is: %d\n",count);

    return 0;
}
