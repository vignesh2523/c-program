#include <stdio.h>
int main()
{
    int n,m,i,j,temp,visited=-1;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    printf("first array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("second array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    j=0;
    for(i=n;i<n+m;i++)
    {
        a[i]=b[j];
        j++;
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=visited;
            }
        }
    }
    for(i=0;i<n+m;i++)
    {
        if(a[i]!=visited)
    {
        printf("%d ",a[i]);
    }

    }


}
