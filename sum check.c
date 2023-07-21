#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k;
    int count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    int sum=0;
    for(i=0;i<n;i++)
    {
              sum+=a[i];
    }
for(i=1;i<10;i++)
{
    if(sum/i==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
}
