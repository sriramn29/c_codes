/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j,m,k,temp;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m){
            for(j=0;j<m;j++){
                for(k=j+1;k<m;k++){
                    if(a[j]>a[k]){
                        temp=a[j];
                        a[j]=a[k];
                        a[k]=temp;
                    }
                }
            }
            for(j=m;j<n;j++){
                for(k=j+1;k<n;k++){
                    if(a[j<a[k]]){
                        temp=a[j];
                        a[j]=a[k];
                        a[k]=temp;
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    
}
