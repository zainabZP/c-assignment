#include<stdio.h>
int findmax(int a, int b)
{
	if(a>b)
	return 1;
	else 
	return 0;
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(findmax(x,y))
	printf("%d is greater",x);
	else
	printf("%d is greater",y);
}
