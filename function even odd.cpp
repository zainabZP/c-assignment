#include<stdio.h>
int evenodd(int a)
{
	if(a%2==0)
	return 1;
	else
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(evenodd(n))
	printf("even");
	else
	printf("odd");
	
}