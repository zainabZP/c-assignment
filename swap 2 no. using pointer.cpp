#include<stdio.h>
int swap(int *a, int *b);
int swap(int *a, int *b)
{
	int t=*a;
	*a= *b;
	printf("a=%d",*a);
	*b=t;
	printf("b=%d",*b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
}