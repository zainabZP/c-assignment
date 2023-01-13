#include<stdio.h>
int main()
{
	int n,a,b,c=0;
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		a=n%10;
		c=(c*10)+a;
		n=n/10;
	}
	if(c==b)
	{
		printf("no. is palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	return 0;
}