#include<stdio.h>
int sum(int a,int b)
{
    int temp=a+b;
    return temp;
}
int pointer(int *a,int *b)
{
    *a *=2;
    *b *=3;

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",sum(a,b));
    int *pr1=&a;
    int *ptr2=&b;
    pointer(pr1,ptr2);
    printf("%d %d\n",a,b);
}
