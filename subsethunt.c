#include <stdio.h>

int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[n],i,j,c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d ",&b[j]);
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(b[j]==a[i])
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			break;
		}
	}
	if(c==1)
	{
		printf("YES");
	}
	if(c==0)
	{
		printf("NO");
	}
	return 0;
}
