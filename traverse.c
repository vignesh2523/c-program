#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,c;
    printf("1 ");
    for(i=1;i<n;i++)
    {
         c=0;
        for(j=i-1;j>=0;j--)
        {

            if(a[j]>=a[i])
            {
                c++;

                break;
            }
            else
            {
                c++;
            }
        }
         printf("%d ",c);
    }
}
