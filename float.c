#include<stdio.h>
int main()
{
  char n[50],m[50];
  scanf("%s",&n);
  scanf("%s",&m);
  int i,j;
  if(n>m)
  {
      printf("%s",n);
  }
  else if(m>n)
  {
      printf("%s",m);
  }
  else
  {
      printf("equal");
  }
}
