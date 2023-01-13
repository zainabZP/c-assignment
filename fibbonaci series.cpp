#include<stdio.h>
int main()
{
	int a=0,b=1,n,sum;
	scanf("%d",&n);
	printf("%d\n %d\n",a,b);
	for(int i=1;i<=n-2;i++)
	{
	sum=a+b;
	printf(" %d\n",sum);	
	a=b;
	b=sum;
	}
	return 0;
}