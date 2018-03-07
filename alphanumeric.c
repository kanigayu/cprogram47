#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int i,z;
z=strlen(a);
scanf("%s",&a[i]);
for(i=0;i<=z+1;i++)
{
if(a[i]>='0' && a[i]<='9')
{
printf("%c",a[i]);
}
}
return 0;
}
