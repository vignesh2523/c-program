#include<stdio.h>
int main()
{
    int flag=0,n,sum=0,k=0,count=0;
    int i,j;
    scanf("%d",&n);
    int b[n];
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }

    if(count==1)
    {
        b[k]=i;
        k++;
    }
}
    for(i=0;i<k-1;i++)
    {
      sum=sum+b[i];
      flag++;
      if(sum==n)
      {
          break;
      }

    }
    printf("%d",flag);

}
