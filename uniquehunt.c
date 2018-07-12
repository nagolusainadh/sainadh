#include<stdio.h>
int main()
{
   int n,a[100],i,b,c=0,e=0,j[20],l=0,s,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      c=0;
      e=0;
      b=a[i];
      while(e<n)
      {
         if(b==a[e])
         {
           c++;
         }     
           e++;     
      }
 
      if(c>1)
      {
        j[l]=b;
        l++;                        
      }        
   }
   if(l!=0)
   { 
   for(i=0;i<l;i++)
    {
        for(s=i+1;s<l;)
        {
            if(j[s] ==j[i])
            {
                for(k=s;k<l;k++)
                {
                    j[k]=j[k+1];
                }
                l--;
            }
            else
            {
                s++;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",j[i]);
    } 
   }
   else
   printf("unique");     
   return 0;
}
