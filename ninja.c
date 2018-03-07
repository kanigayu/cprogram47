#include<stdio.h>
int main()
{
int k,z,i;
scanf("%d\t%d",&k,&z);
for(i=0;i<3;i++)
{
if(k<z)
{
printf("%d",z-k);
}
else
printf("%d",k-z);
}
return 0;
}
