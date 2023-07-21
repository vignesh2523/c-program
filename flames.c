#include<stdio.h>
int main()
{
    char player[100];
    char player1[100];
    scanf("%[^\n]%*c",&player);
    scanf("%[^\n]%*c",&player1);
    int size=strlen(player);
    int size2=strlen(player1);
    int i,j,temp=0,count=0;
    char a[size];
    for(i=0;i<size2;i++)
    {
        if(player1[i]==player[i])
        {
            player1[i]=temp;

        }


    }
   if(player1!=0)
   {
       count++;

   }
   printf("%d",count);


}
