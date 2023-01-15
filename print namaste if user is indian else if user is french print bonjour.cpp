#include<stdio.h>
void printnamaste();
void printbonjour();
void printnamaste()
{
	printf("namaste");
}
void printbonjour()
{
	printf("bonjour");
}
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'I': printnamaste();break;
		case 'F': printbonjour();break;
	}
}