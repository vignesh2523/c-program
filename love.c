#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           if(i==8 || i==9 || i==10)
           {
               printf("*");
           }
           else if(i==11 || j>=2 || j<=39)
           {

             printf("*");
           }

        }
        printf("\n");
    }


}
