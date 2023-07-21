#include <stdio.h>
int factorial(int num,int fact)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        fact=fact*num;
        num--;
        factorial(num,fact);
    }
    return fact;
}
int main()
{
    int data; scanf("%d",&data);
    int fact=1;
    printf("%d",factorial(data,fact));
}
