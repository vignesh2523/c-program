#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    int len=strlen(n);
    int count=1;
    for(int i=0;i<len;i++)
    {
        if(n[i]==n[i+1])
        {
            count++;
        }
        else{
            if(count>1)
            printf("%c%d",n[i-1],count);
            else
            printf("%c%d",n[i],count);
            count=1;
        }
    }
}
