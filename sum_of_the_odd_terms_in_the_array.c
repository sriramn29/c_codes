#include<stdio.h>
main()
{
    int a[10],i,sum=0;
    printf("Enter upto 5 Values: ");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(i%2==1 || i==1)
            sum=sum+a[i];
    }
    printf("Total Sum of Odd values is: %d ",sum);
   
}