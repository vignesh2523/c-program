#include<stdio.h>
int main()
{
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);
    int i,j;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    if(p==1)
    {
    for(i=0;i<n;i++)
      {
        for(j=m-1;j>=0;j--)
        {
          printf("%d",a[j][i]);
         }
         printf("\n");
    }
    }

}

