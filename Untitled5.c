#include<stdio.h>
int main()
{
  int i,n,temp,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<=n;i++)
  {
      scanf("%d",&a[i]);
  }
  if(a[0]>a[1])
      {
          printf("%d",a[0]);
      }

}
