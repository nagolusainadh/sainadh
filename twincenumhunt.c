#include<stdio.h>
int main()
{
   int a[100],i,b,d=0,e=0;
   long int n;
   scanf("%ld",&n);
   if(n>=1&&n<=100000)
   {
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      d=0;
      e=0;
      b=a[i];
      while(e<n)
      {
         if(b==a[e])
         {
           d++;
         }     
           e++;     
      }

      if(d==1)
      { 
         printf("%d",b); 
      }        
   }
  }
  else
  printf("Invalid Input");
  return 0;
}
