#include<stdio.h>
int main()
{
    int i,temp,f,s,avg,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    f=a[0];
    s=a[1];
    if(s>f)
    {
        temp=s;
        s=f;
        f=temp;
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>f)
        {
            s=f;
            f=a[i];
        }
        else if(a[i]>s)
        {
            s=a[i];
        }
    }
    printf("\n");
    printf("%d %d",s,f);
    return 0;
}
