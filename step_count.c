#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0,b=0;
    int i;
    for(i=1;i<n;)
    {
        if(i%2!=0)
        {
            c++;
            i++;
        }
        else if(i%2==0)
        {
            int s=n-i;
            b=s/2;
            i=i+s;

        }
    }
    int v=c+b;
    printf("%d",v);
}
