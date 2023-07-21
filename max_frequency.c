#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int mid=n/2,a[n],i,j,count,visited=-1;
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=visited;
            }
        }
        if(a[i]!=visited)
        {
            if(count>mid)
            {
                printf("The value %d has the frequency of %d which is greater than the half of the size of array %d",a[i],count,mid);
            }
        }
    }
    return 0;
}
