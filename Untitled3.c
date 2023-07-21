#include<stdio.h>
int main()
{
    int n,i,temp,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        j=n%2;
    }
    else
    {
        j=(n/2)+1;
    }
    for(i=0;i<n/2;i++)
    {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       j--;

    }
    for(i=0;i<n;i++)
    {

        printf("%d\t",a[i]);

    }
return 0;
}
