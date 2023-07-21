#include<stdio.h>
int main()
{
    int i,j;
    char s[100],v[100];
    scanf("%[^\n]s",s);
    for(i=0,j= ;s[i]!='\0';i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            v[j]=s[i];
            j++;
        }
    }
    v[j]=NULL;
    printf("%s",v);
}

