#include<stdio.h>
int main()
{
	for(int i=0;i<=4;i++)
	{
		for(int j=4;j>=i;j--)
		printf(" ");
		for(int k=1;k<=(2*i)+1;k++)
		printf("*");
		printf("\n");
	}
	return 0;
}