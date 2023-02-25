#include<stdio.h>
#include<conio.h>
	void main()
{
	int x,y,a,b,c,result;
	clrscr();
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	a=x*x;
	b=2*x*y;
	c=y*y;
	result:a+b+c;
	printf("result:%d",result);
	getch();
}
