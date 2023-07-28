/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *p1,*p2,a=10,b=20,*temp;
    p1=&a;
    p2=&b;
    temp=p1;
    p1=p2;
    p2=temp;
    printf("a=%d b=%d",*p1,*p2);
    return 0;
}
