/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mynumbers[4];
    for(int i=0;i<4;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&mynumbers[i]);
    }
    for(int i=0;i<4;i++)
    {
        printf("%d\n",mynumbers[i]);
    }
    return 0;
}
