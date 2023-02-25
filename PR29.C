#include<stdio.h>
#include<conio.h>
	void main()
{
	int bs,hra,da,ta,salary,t;
	clrscr();
	printf("enter base salary");
	scanf("%d",&bs);

	hra=bs*10/100;
	printf("hra=%d\n",hra);

	da=bs*5/100;
	printf("da=%d\n",da);

	ta=bs*8/100;
	printf("ta=%d\n",ta);

	t=bs+hra+da+ta;
	printf("t is %d",t);
	getch();
}