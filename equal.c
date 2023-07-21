#include <stdio.h>
int main()
{
    int n,m,i,j,count=0,temp;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    if(n!=m)
    {
        printf("not equal");
        return 0;

    }
    else{
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
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=i+1;j<m;j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;

                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
        }
            if(count==n)
            {
                printf("equal");
            }
            else
            {
                printf("not equal");
            }

    }
}
