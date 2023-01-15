#include<stdio.h>
int main()
{
	int age1=25;
	int age2=22;
	int *ptr1=&age1;
	int *ptr2=&age2;
	int diff=ptr1-ptr2;
	printf("%u\n",diff);
	ptr1=&age2;
	printf("%u",ptr1==ptr2);
}