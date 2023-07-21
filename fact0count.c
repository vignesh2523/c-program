#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int m=1;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    char s[10];
    tostring(s,m);
}
void tostring(char s[], int m)
{
    int i, rem, len = 0, n;

    n = m;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = m % 10;
        m = m / 10;
        s[len - (i + 1)] = rem + '0';
    }
     s[len] = '\0';
     int v=0,c=0;
     for(i=0;i<len;i++)
     {
         if(s[i]=='0')
         {
             c++;
         }
     }
     printf("%d",c);
}
