#include<stdio.h>
int main()
{
	int age=22;
	int *ptr=&age;
	int newage=*ptr;
	printf("%d",*ptr);
}