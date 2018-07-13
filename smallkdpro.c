#include <stdio.h>
int main()
{
    int num,i,j,a[10],r=0,temp=0,k;
    scanf("%d",&num);
    scanf("%d",&k);
    while(num!=0)
    {
        a[r]=num%10;
        num=num/10;
        r++;
    }
    
    for(i=0;i<r;i++)
    {
      for(j=i+1;j<r;j++)
          { 
              if(a[i]>a[j])
               {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;}
               }
           temp=0;
    }
    
    for(i=0;i<r-k;i++)
    {
       temp=(temp*10)+a[i];
    }
    printf("%d",temp);
    return 0;
  
}
