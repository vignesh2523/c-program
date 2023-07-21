#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n,&k);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l,p,j;
    int v=k*2;
    for(i=1;i<=k;i++)
    {
        if(a[i]>a[i+1])
        {
            p=a[i]-a[i+1];
            break;
        }
        if(a[i]<a[i+1])
        {
            p=a[i+1]-a[i];
            break;
        }
    }
    for(j=k+1;j<=v;j++)
    {
        if(a[j]>a[j+1])
        {
            l=a[j]-a[j+1];
            break;
        }
        if(a[j]<a[j+1])
        {
            l=a[j+1]-a[j];
            break;
        }
    }
    int s=p+l;
    printf("%d",s);
}
