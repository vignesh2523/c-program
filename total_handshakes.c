#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int c=0;
    for(i=1;i<n;i++)
    {
        int b=n-i;
        c=c+b;
    }
    printf("%d",c);

}
