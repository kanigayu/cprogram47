#include<stdio.h>
int main()
{
int a,b,c,i;
scanf("%d\t%d",&a,&b);
for(i=0;i<4;i++)
{
if(i%2==0)
{
c=a/b;
}
else
  c=a%b;
  printf("%d",c);
}
  return 0;
}
