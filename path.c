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
    int m,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
        }
    }
    if(n>2)
    {
        printf("%d %d ",a[0],a[1]);
    }
    else
    {
        printf("not valid");
    }

}
