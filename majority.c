#include <stdio.h>
int main()
{
    printf("Enter the number of rows and columns: ");
    int m,n,i,j,count; scanf("%d %d",&m,&n);
    int a[m][n],max=0,output;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            output=i;
        }
    }
    printf("The row contains maximum of 1's is: %d",output);
}
