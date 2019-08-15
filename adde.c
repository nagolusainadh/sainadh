#include<stdio.h>
int main()
{
 int n,i,j,k;
 int arr[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
  	for(k=j+1;k<n;k++)
  	{
     if(arr[i]+arr[j]==arr[k])
     printf("%d %d %d\n",arr[i],arr[j],arr[k]);
    }
  }
 }
}
