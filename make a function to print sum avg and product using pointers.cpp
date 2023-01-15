#include<stdio.h>
int dowork(int a,int b, int *sum, int *pro, int *avg);
int dowork(int a, int b, int *sum, int *pro, int *avg)
{
	*sum=a+b;
	*pro=a*b;
	*avg=(a+b)/2;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int sum,pro,avg;
	dowork(a,b,&sum,&pro,&avg);
	printf("%d %d %d",sum,pro,avg);
}