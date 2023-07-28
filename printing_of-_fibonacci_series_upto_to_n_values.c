/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    long long int fib1=0,nextterm=0;
    long long int fib2=fib1+1;
    //scanf("%ld",&fib1);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=fib1;
        nextterm=fib1+fib2;
        fib1=fib2;
        fib2=nextterm;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
