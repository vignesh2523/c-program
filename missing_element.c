#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a[n],i,count=0,count1=0;
 for(i=0;i<n-1;i++)
 {
   scanf("%d",&a[i]);
   count+=a[i];
 }
 for(i=1;i<=n;i++)
 {
   count1+=i;

 }
 printf("The missing element: %d",(count1-count));
}
