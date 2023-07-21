#include<stdio.h>
int main()
{
    char n[10];
    scanf("%s",n);
    int i,j;
    int a[3];
    char b[4];
    for(i=1;i<=strlen(n);i++)
    {
      for(j=0;j<3;j++)
      {
         if(i%2==0)
        {
            a[j]=n[i];
        }
      }
    }
    printf("%d",a[j]);
    }
