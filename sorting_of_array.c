#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){      //for ascending order. for descending order a[i]<a[j]
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}