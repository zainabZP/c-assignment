 #include<stdio.h>
void circle(int r);
float triangle(int b, int h);
void circle(int r)
{
	float area=3.14*r*r;
	printf("%f",area);
}
float triangle(int b, int h)
{
	float area=(1/2.0)*b*h;
	return area;
}
int main()
{
	int r,b,h;
	scanf("%d %d %d",&r,&b,&h);
	circle(r);
	float t=triangle(b,h);
	printf("\n%f",t);
}