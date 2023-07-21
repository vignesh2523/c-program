#include<stdio.h>
int main()
{
    int n,m,r;
    scanf("%d %d %d",&n,&m,&r);
    int a[n];
    int b[m];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int c=0,p=0,v;
    for(i=0;i<n;i++)
    {
        c+=a[i];
        p+=b[i];

    }
     if(c==p)
        {
            printf("balanced");
        }
        else if(c>p)
        {
            v=c-p;
            int j=v+r;
            printf("%d",-j);
        }
        else
        {
            v=p-c;
            int j=v+r;
            printf("%d",j);

        }

}
