#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	c=c%10;
	d=a/10;
	d=d/10;
	e=(b*100)+(c*10)+d;
	printf("%d",e);
	return 0;
	
}
