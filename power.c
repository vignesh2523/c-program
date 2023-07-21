#include<stdio.h>
int main()
{
    int num1,num2,temp,i;
    scanf("%d %d",&num1,&num2);
    temp=num1;
    for(i=1;i<num2;i++)
    {
        temp=temp*num1;
    }
    int k,n=0,r=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
        {
         n=n*10+temp%10;
         temp=temp/10;
        }
     for(i=0;i<k;i++)
     {
         r=r*10+n%10;
         n=n/10;
     }
     printf("%d",r);
}
