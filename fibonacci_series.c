/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long int fib1=0,fib2=1,nextterm=0;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%ld ",fib1);
        nextterm=fib1+fib2;
        fib1=fib2;
        fib2=nextterm;
    }
    return 0;
}
