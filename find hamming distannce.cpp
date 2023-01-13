#include<stdio.h>
int main()
{
	int a,b,x,c=0;
	scanf("%d %d",&a,&b);
	x=a^b;
	while(x)
	{
		c=c+(x&1);
		x>>=1;
	}
	printf("hammning distance = %d",c);
}