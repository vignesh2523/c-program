#include<stdio.h>
void subset(int a[],int n,int index,int s[])
{
    int i,j;
    if(index==n)
    {
        for(i=0;i<n;i++)
        {
          if(s[i]==1)
          {
              printf("%d",a[i]);
          }
        }
        printf("\t");
    }
    else
    {
        s[index]=1;
        subset(a,n,index+1,s);
         s[index]=0;
        subset(a,n,index+1,s);
    }
}
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
    int s[n];
    subset(a,n,0,s);
}
