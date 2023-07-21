#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            {
                if(k==a[i])
                {
                    count++;
                }

            }
    }
            if(count>0)
            {
              printf("element found");
            }
            else
                {
                    printf("not found");
                }


}
