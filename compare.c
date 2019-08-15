#include<stdio.h>
int main()
{
 int n,i,j;
 int arr[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  if(i%2==0)
  {
  	for(j=i+1;j<n;j++)
  	{
  	 int a;
     if(arr[i]<arr[j])
      {
      	a=arr[i];
      	arr[i]=arr[j];
      	arr[j]=a;
      } 
    }
  }
  else
  {
   for(j=i+1;j<n;j++)
   {
	int a;
    if(arr[i]>arr[j])
    {
     a=arr[i];
     arr[i]=arr[j];
     arr[j]=a;
    } 
   }
  }
 }
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
}
