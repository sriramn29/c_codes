/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&n);
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]+a[j]==n){
                 printf("%d %d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}

