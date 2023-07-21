#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    char m[100];
    scanf("%s",m);
    int len=strlen(n);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(n[i]!=m[i])
        {
            count++;
        }
    }
    printf("%d",count);
}
