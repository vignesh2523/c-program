#include<stdio.h>
int main()
{
    char str[100];
    int count=0;
    scanf("%[^\n]s",&str);
    char* word=strtok(str,' ');
    while(word!=NULL)
    {

        word=strtok(NULL,' ');
        printf("%d\n",strlen(word));
    }
}
