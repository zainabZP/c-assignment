#include<stdio.h>
int table(int x);
int table(int x)
{
	int pro=1;
	for(int i=1;i<=10;i++)
	{
		pro=i*x;
		printf("%d\n",pro);
	}
	return pro;
}
int main()
{
	int a;
	scanf("%d",&a);
	int t=table(a);
}