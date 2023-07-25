#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    char operator;
    float num1,num2,result = 0;
    printf("Enter any operators like + - * / :");
    scanf("%c",&operator);
    printf("Enter the value of operands num1 and num2 : ");
    scanf("%f %f",&num1,&num2);
    switch(operator)
    {
        case '+':
        {
            result=add(num1,num2);
            printf("%.2f",result);
            break;
        }
        case '-':
        {
            result=sub(num1,num2);
            printf("%.2f",result);
            break;
        }
        case '*':
        {
            result=mul(num1,num2);
            printf("%.2f",result);
            break;
        }
        case '/':
        {
            result=div(num1,num2);
            printf("%.2f",result);
            break;
        }
    }
    
}