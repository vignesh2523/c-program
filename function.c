#include<stdio.h>
void armstrong(int a)
{
    int sum=0,count=0,b;
    int x=a;
    while(a>0)
    {
        b=a%10;
        sum+=b*b*b;
        a=a/10;
    }
    if(sum==x)
    {
        printf("Armstrong number:%d",sum);
    }
    else
    {
        ("it's not an armstrong value");
    }
}
void palindrome(int a)
{
    int temp=0,b;
    int x=a;
    while(a>0)
    {

        temp=b;
        a=a/10;
    }
    if(temp==x)
    {
        printf("it's palindrome");
    }
    else
    {
        printf("not an palindrome");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int c;
    scanf("%d",&c);
    armstrong(n);
    palindrome(c);
}
