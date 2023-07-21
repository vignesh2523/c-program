#include <stdio.h>
int main()
{
    int i,j,count,m=0,array_size,a[array_size],temp,size;
    scanf("%d",&count);
    printf("enter %d numbers\n",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    count=1;
    for(i=1;i<size;i++)
    {
        if(a[m]==a[i])
           {
             count++;
           }
        else{
            count--;
        }
        if(count==0)
            {m=i;
            count=1;
    }
    }
    count=0;
    for(i=0;i<size;i++)
    {
        if(a[i]==a[m])
        {
            count++;
        }
    }
    if(count>size/2)
    {
        printf("%d",a[m]);
    }
    else
        printf("no majority element found");


}
