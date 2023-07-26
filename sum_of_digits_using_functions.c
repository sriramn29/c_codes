/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sumofdigits(int a){
    int r,sum=0;
    while(a>0){
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    return sum;
}
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("The sum of the digits is: %d\n",sumofdigits(n1));
    printf("The sum of the digits is: %d\n",sumofdigits(n2));
}
