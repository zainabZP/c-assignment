#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a>=0)
	{
		case1:switch(a>0)
		{
			printf("pos");
		}break;
		case2:
		{
			printf("zero");
		}break;
		default:printf("neg");
	}
}