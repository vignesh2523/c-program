#include<stdio.h>
int main()
{
    int n,i;
    int c=0;
    scanf("%d",&n);
    if(n%2!=0)
    {
    for(i=1;i<n;i++)
    {
        int b=n-i;
        c=c+b;
    }
    printf("%d",c+1);
    }
    else
    {
    for(i=1;i<n;i++)
    {
        int b=n-i;
        c=c+b;
    }
      printf("%d",c+n);
    }

}
