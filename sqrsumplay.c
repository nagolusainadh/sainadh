#include <stdio.h>

int main(void) {
	int n;
	int j,k,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		k=n%10;
		j=k*k;
		sum=sum+j;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
