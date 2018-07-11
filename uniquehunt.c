#include<stdio.h>
int main()
{
	int b[100],n,i,j,count=0;
	printf("");
	scanf("%d",&n);
	printf("");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]==b[j])
			{
				printf("%d ",b[i]);
				count=count+1;
			}
		}
	}
		if(count==0)
		{
			printf("\nunique");
}
return 0;
}
