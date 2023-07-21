#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
}*temp,*head,*newnode,*tail;
int main()
{
    int i,size;
    int count=0,count1=0;
    scanf("%d",&size);
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
    }
    case 2:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
     count++;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
        printf("%d",count);
        printf("\n");
        int v;
        scanf("\n%d",&v);
         temp=head;
    while(temp!=NULL)
    {
       if(temp->data==v)
         {
             count1++;
         }
         temp=temp->next;
    }
    if(count1==1)
    {
        printf("found");
    }


    case 3:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
    }
    printf("insert at front\n");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    temp=head;
    newnode->next=temp;
    head->prev=temp;
    head=newnode;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        if(temp->next==NULL)
        {
            break;
        }
        temp=temp->next;
    }
    case 4:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
    }
    printf("insert at end\n");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=NULL;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    case 5:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
    }
    printf("insert at mid\n");
    int p;
    scanf("%d",&p);
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    for(i=1;i<p;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    case 6:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
    }
        printf("delete at front\n");
    newnode=(struct node*)malloc(sizeof(struct node));
      temp=head;
     head=head->next;
     free(temp);
     temp=head;
     while(temp!=NULL)
     {
      printf("%d",temp->data);
      temp=temp->next;
    }
    case 7:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
    }
        printf("delete at end\n");
    temp=head;
    while(temp->next!=tail)
    {
     temp=temp->next;
    }
    temp=temp->prev;
    newnode=temp->next;
    tail=temp;
    temp=head;
    while(temp!=NULL)
    {
     printf("%d",temp->data);
     temp=temp->next;
    }
    case 8:
    for(i=1;i<=size;i++)
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         temp=newnode;
     }
     else
     {
         temp->next=newnode;
         newnode->prev=temp;
         temp=temp->next;
     }
    }
        printf("delete at end\n");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);


    }
}
