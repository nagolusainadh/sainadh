#include<stdio.h>
int main()
{
   int n,a[100],i,b=0,d=-1;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      if(i==a[i]&&n!=i)
      {
      printf("%d ",a[i]);
      b++;
      } 
      if(i==n&&i==a[i])
      {
        printf("%d",a[i]);
        b++;
      }
   }
   if(b==0)
   printf("%d",d);
   return 0;
}
