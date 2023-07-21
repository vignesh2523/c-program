#include<stdio.h>
int main()
{
    int v=5;
    int *ptr=&v;
    int *qtr;
    qtr=ptr;
    printf("%d %d %d %d %d %d %d %d",*ptr,v,&v,ptr,*(&v),qtr,*qtr,*ptr);
}
