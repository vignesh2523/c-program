import java.util.*;
class wall
{
public static void main(String[] args)
{
int t, count;
Scanner s=new Scanner(System.in);
t=s.nextInt();
while (t>0)
{
  String str=s.nextLine();
 count=0;
char[] a=str.toCharArray();
for (int i=0;i<a.length;i++)
{
  if(a[i]=='B')
  {
    if (i-1>=0  &&  i-2>=0  &&  a[i-1]=='W'  &&  a[i-2]=='W')
   {
     count=count+2;
     a[i-1]='@';
     a[i-2]='@';
    }
    else if (i-1>0 &&  a[i-1]=='W' )
   {
    count=count+1;
    a[i-1]='@';
   }
  if (i+1<a.length  &&  i+2<a.length  &&  a[i+1]=='W' &&  a[i+2]=='W')
  {
   count=count+2;
   a[i+1]='@';
   a[i+2]='@';
  }
else if (i+1<a.length && a[i+1]=='W')
{
  count=count+1;
  a[i+1]='8';
   }
  }
}
System.out.println(+count);
 t--;
}
}
}
