#include<stdio.h>
int main()
{
    int t=0,e=1,n=5;
    int i,s;
    for(i=0;i<n;i++)
    {
        s=t+e*e;
        t=e;
        e=s;
    }
    printf("%d",s);
}
