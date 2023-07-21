#include<stdio.h>
void fun(int c,int d)
{
    int e=d;
    int f=c;
    printf("%d %d",e,f);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    fun(a,b);
    printf("%d %d",a,b);
}
