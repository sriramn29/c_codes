#include<stdio.h>
int main()
{
    int a,flag,i;
    scanf("%d",&a);
    if(a>=2){
        for(i=2;i<a;i++){
            if(a%i==0){
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("prime");
    }
    else{
        printf("not a prime");
    }
}