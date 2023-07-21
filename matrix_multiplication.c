#include<stdio.h>
int main(){
int m,n,i,j,k;
scanf("%d %d",&m,&n);
int a[m][n],b[m][n],mul[m][n];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
mul[i][j]=0;
for(k=0;k<n;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}
