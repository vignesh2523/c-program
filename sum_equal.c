#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s,b,c=0;
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            b=a[i]+a[j];
            if(s==b)
            {
                c++;
            }
        }
    }
    if(c>0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
