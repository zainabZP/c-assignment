#include<stdio.h>
int main()
{
	int num,term,min,max;
	printf("enter the no of number to be compared");
	scanf("%d",&term);
	printf("enter the first no");
	scanf("%d",&num);
	min= num;
	max = num;
	for(int i =1;i <term; i ++)
	{
			printf("enter another num");
	scanf("%d",&num);
	if (max< num)
	max = num;
	if (num <min)
	min = num;
	}
printf("the largest no is %d",max);
printf("the smallest no is %d",min);
}