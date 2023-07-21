#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k;
    int count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
              sum+=a[i]+a[j]+a[k];
            }
        }
    }
    int l=1;
    if(sum%l==0)
    {
        if(sum/l==c)
        {
        printf("True");
        if(sum/l!=c)
        {
         l++;
        }
        }
    }
    else
    {
        l++;
    }
    }
