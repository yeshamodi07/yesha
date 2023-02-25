#include<stdio.h>
#include<conio.h>
	void main()
{
	int x,y,a,b,c,d,result;
	clrscr();
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	a=x*x*x;
	b=3*x*x*y;
	c=3*x*y*y;
	d=y*y*y;
	result=a-d-b+c;
	printf("result:%d",result);
	getch();
}