#include<stdio.h>
#include<string.h>
struct student
{
    int regno;
    char name[20];
    char address[30];
    int marks[10];
    float cgpa;
}s1,s2;
int main()
{
    printf("enter student1");
    scanf("%d",&s1.regno);
    scanf("%s",s1.name);
    scanf("%f",&s1.cgpa);
    scanf("%s",s1.address);
    for(int i=1;i<=5;i++){
        scanf("%d",&s1.marks[i]);
    }
    printf("enter student2");
    scanf("%d",&s2.regno);
    scanf("%s",s2.name);
    scanf("%f",&s2.cgpa);
    scanf("%s",s2.address);
    for(int i=1;i<=5;i++){
        scanf("%d",&s2.marks[i]);
    }
    printf("\n record for student1");
    printf("regno=%d",s1.regno);
    printf("name=%s",s1.name);
    printf("cgpa=%f",s1.cgpa);
    printf("address=%s",s1.address);
    for(int i=1;i<=5;i++)
    {
        printf("marks=%d",s1.marks[i]);
    }

    printf("\n record for student2");
    printf("regno=%d",s2.regno);
    printf("name=%s",s2.name);
    printf("cgpa=%f",s2.cgpa);
    printf("address=%s",s2.address);
    for(int i=1;i<=5;i++)
    {
        printf("marks=%d",s2.marks[i]);
    }
}
