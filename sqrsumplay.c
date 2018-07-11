#include <stdio.h>

int main(void) {
	int num;
	int j,k,sum=0;
	scanf("%d",&num);
	while(num>0)
	{
		k=num%10;
		j=k*k;
		sum=sum+j;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}
