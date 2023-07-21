#include<stdio.h>
#define m 4
int a[m];
int create()
{
    int i;
    printf("enter the element:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    return a;
}
int display(int a[])
{
    create();
    int i;
    printf("enter the element: ");
    for(i=0;i<m;i++)
    {
        printf("%d",a[i]);
    }
}
int insert(int a[])
{
    create();
    int i,p,v;
    printf("enter the position and value: ");
    scanf("%d %d",&p,&v);
    for(i=m;i>=p;i--)
    {
        a[i]=a[i-1];
        if(i==p)
        {
            a[i]=v;
        }
    }
    for(i=0;i<m+1;i++)
    {
        printf("%d",a[i]);
    }
}
int del(int a[])
{

    create();
    int i,v,p;
    printf("enter the value:");
    scanf("%d",&v);
    for(i=0;i<m;i++)
    {
        if(a[i]==v)
        {
            p=i;
        }
    }
    for(i=p;i<m;i++)
    {
        a[i]=a[i+1];

    }
    for(i=0;i<m-1;i++)
    {
        printf("%d",a[i]);
    }

}
int search(int a[])
{
    create();
    int i,v,count=0;
    printf("enter the value:");
    scanf("%d",&v);
    for(i=0;i<m;i++)
    {
        if(a[i]==v)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("prsent");
    }
    else
    {
        printf("not present");
    }

}




int main()
{
    int n,i,j;
    printf("Enter the 1 to create\n");
    printf("Enter the 2 to display\n");
    printf("Enter the 3 to insert\n");
    printf("Enter the 4 to delete\n");
    printf("Enter the 5 to search\n");
    while(1!=0)
    {
    printf("\nEnter the choice: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        create();
        break;
    case 2:
        display(a);
        break;
    case 3:
        insert(a);
        break;
    case 4:
        del(a);
        break;
    case 5:
        search(a);
        break;
    default:
        printf("exit");
        break;
    }



    }


}

