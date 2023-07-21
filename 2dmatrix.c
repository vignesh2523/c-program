#include<stdio.h>
int main()
{  int n,m,i,j;
  scanf("%d\n%d",&n,&m);
  int a[n][m],b[n][m],k;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
    scanf("%d",&a[i][j]);
     }
    }
    for(i=0;i<n;i++)
    {
      j=0;
      for(k=n-1;k>=0;k--)
     {
         b[i][j]=a[k][i];
         j++;
         }
        }
        int ma[n][m];
        int l;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                ma[i][j]=0;
            for(l=0;l<m;l++)
            {
                ma[i][j]+=a[i][l]*b[l][j];
            }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t",ma[i][j]);
            }
            printf("\n");
        }

        return 0;
        }
