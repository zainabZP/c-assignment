#include<stdio.h>
int main()
{
	int marks=89;
	int *ptr=&marks;
	int _marks=*ptr;
	printf("%p",ptr);
}