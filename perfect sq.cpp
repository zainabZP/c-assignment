#include<stdio.h>
int perfectsq(int n)
{
	for(int i=1;i<n/4;i++)
		if((i*i)==n)
		return 1;
}
int main()
{
	int a;
	scanf("%d",&a);
	if(perfectsq(a))
	printf("yes");
	else
	printf("no");
	
}