#include<stdio.h>
int main()
{
	float a[3]={100.0,50.0,30.0};
	float price1=a[0]+(18/100)*a[0];
	float price2=a[1]+(18/100)*a[1];
	float price3=a[2]+(18/100)*a[2];
	printf("%f\n %f \n %f",&price1,&price2,&price3);
}