#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v;
    while(n>0)
    {
        v=n/2000;
        n=n%2000;
        printf("2000-%d ",v);
        v=n/500;
        n=n%500;
        printf(" 500-%d ",v);
        v=n/100;
        n=n%100;
        printf(" 100-%d ",v);
        v=n/5;
        n=n%5;
        printf(" 5-%d ",v);
        v=n/1;
        n=n%1;
        printf(" 1-%d ",v);
    }
}

