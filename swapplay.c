#include<stdio.h>
int main()
{
int n,i,c=0,j,k;
char a[100],v;
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;i<c;i++)
{
if(i%2!=0)
{
v=a[i];
a[i]=a[i-1];
a[i-1]=v;
}
}
printf("%s",a);
return 0;
}
