#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
      temp=temp*10+a[i];
    }
    scanf("%d",&j);
    temp=temp+j;
    printf("%d",temp);


    return 0;
    }
