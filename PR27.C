#include<stdio.h>
#include<conio.h>
	void main()
{
	int a,b,temp;
	clrscr();
	printf("value of a:");
	scanf("%d",&a);
	printf("value of b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	getch();
}

