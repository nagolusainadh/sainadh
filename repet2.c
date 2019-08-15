#include<stdio.h>
int main()
{
 int n,i,b=0;
 int arr[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 int j;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n-1;j++)
  {
   if(arr[i]==arr[j])
   {
    b=arr[i];
    printf("%d ",b);
    break;
   }
  if(b!=0)
  break;
  }
 }
 if(b==0)
 printf("unique");
}
