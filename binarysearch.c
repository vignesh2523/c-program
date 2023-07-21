#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=a[0],high=a[n-1];
    int mid=low+high/2;

    if(k==a[mid])
    {
      printf("%d",a[mid]);
    }
    else if(k<a[mid])
    {
      low=a[0];
      high=a[mid];
    }
    else
    {
      low=a[mid+1];
      high=a[n-1];
    }
    for(i=low;i<n;i++)
    {
        if(k==a[i])
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("present");
    }
    else
    {
        printf("not present");
    }
}
