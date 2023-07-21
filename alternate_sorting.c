#include<stdio.h>
int main()
{
 int i,n,temp,j;
 scanf("%d",&n);
 int a[n];
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     if(a[i]<a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
   }
  }
  temp=n-1;j=0;
  for(i=0;i<n;i++)
  {
   if(i%2!=0){
    printf("%d ",a[j] ); ++j;}
    else{
    printf("%d ",a[temp] ); --temp;}
  }

 return 0;
}
