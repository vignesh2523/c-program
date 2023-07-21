#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    int b=0;
    int c=0;
    for(i=0;i<n;i++)
    {
        b+=a[i];
    }
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if(b%a[i]==0)
       {
           c++;
       }
       else if(b%(a[i]+a[j])==0)
       {
           c++;
       }

       }
   }
   printf("%d",c);
}
