#include<stdio.h>
int main()
{
	int n;
	scanf("%d",n);
	int a[n];
	int *ptr=&a[0];
	for(int i=1;i<=n;i++)
	{
		printf("%u",*ptr);
		ptr++;
	}
}