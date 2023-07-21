#include<stdio.h>
int main()
{
    char order[8]={'!','#','$','%','&','*','@','^','~'};
    int k=sizeof(order);
    char n[100];
    scanf("%s",&n);
    int p=sizeof(n);
   int i,j,c=0;
   for(i=0;order[i]!='\0';i++)
   {
     for(j=0;n[j]!='\0';j++)
     {
         if(order[i]==n[j])
         {
             c++;
         }
     }
   }
   printf("%d",c-1);
}
