#include<stdio.h>
int main()
{
    int i,j,count;
    scanf("%d",&count);
    int n=(count*2)-1;
    int rowmin=1;
    int rowmax=n;
    int colmin=1;
    int colmax=n;
    int a[n][n];
    while(rowmin<=rowmax && colmin<=colmax)
    {
        for(i=colmin;i<=colmax;i++)
        {
            a[rowmin][i]=count;
        }
        for(i=rowmin+1;i<=rowmax;i++)
        {
            a[i][colmax]=count;
        }
        for(i=colmax-1;i>=colmin;i--)
        {
            a[rowmax][i]=count;
        }
        for(i=rowmax-1;i>=rowmin+1;i--)
        {
            a[i][colmin]=count;
        }
            rowmin++;
            rowmax--;
            colmin++;
            colmax--;
            count--;

    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
return 0;
}


