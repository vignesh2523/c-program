#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]%*c",&str);
    char*word=strtok(str," ");
    int count=1;
    while(word !=NULL)
    {
         printf("%s\n",word);
        word=strtok(NULL," ");
        count++;
printf("%d",count);
    }


    return 0;
}
