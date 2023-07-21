#include<stdio.h>
int main()
{
    int n,o;
    scanf("%d",&n);
    char a[50];
    int i,m;
    scanf("%s",&a);
    scanf("%d",&o);
    int n1=n/10;
    int n2=n%10;
    if(n1>n2)
    {
        m=n1*6;
    }
    else if(n2>n1)
    {
        m=n2*6;
    }
    else
    {
        m=n1*6;
    }
    int f=a[0];
    int s=a[1];
    int v=f-64;
    int b=s-64;
     int k;
    if(v>b)
    {
        k=v*v;
    }
    else if(v<b)
    {
            k=b*b;
    }
     else
    {

            k=v*v;

    }
    int h=k*m;
    printf("%d",h);

}
