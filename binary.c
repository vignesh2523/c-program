#include<stdio.h>
int main()
{
    int n,i,j,k,temp,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])

            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int low=a[0],high=a[n-1];
    while(low<=high)
    {
    if(k==a[mid])
    {
      printf("%d",a[mid]);
    }
    else if(k<a[mid])
    {
      low=a[0];
      high=a[mid-1];
      mid=(low+high)/2;
    }
    else
    {
      low=a[mid+1];
      high=a[n-1];
      mid=(low+high)/2;
    }
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


