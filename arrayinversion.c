#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);

}
