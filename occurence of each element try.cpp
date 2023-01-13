#include<stdio.h>
int main()
{
	int i,n,count;
	printf("enter no of elemt in array");
	scanf("%d",&n);
	int a[n];
	printf("enter elements");
	for(int i = 0; i < n; i ++)
	scanf("%d",&a[i]);
	for(int i = 0; i <n ; i ++)
	{
		for(int j=1; j < n;j ++)
		{if (a[i] == a[j])
		count ++;
		}
	}
	printf("the frequency of %d is %d", a[i],count);
	return 0;
}