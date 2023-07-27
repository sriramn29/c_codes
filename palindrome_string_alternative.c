#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,count=0;
    char a[20];
    printf("Enter a string: ");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]==a[len-i-1]){
            count++;
        }
    }
    if(count==len){
        printf("The given string is a palindrome");
    }
    else{
        printf("The given String is not a palindrome");
    }
}