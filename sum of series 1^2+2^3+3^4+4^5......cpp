#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	a=pow(i,i+1);
	sum=sum+a;
}
	printf("%d",sum);
	return 0;
}