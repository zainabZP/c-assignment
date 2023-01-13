#include <stdio.h>
int main()
{
	int a=3,b;
	b=(++a)+(a++)+(--a);
	printf("%d",b);
	return 0;
}