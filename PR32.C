#include<stdio.h>
#include<conio.h>
	void main()
{
	int a=40,b=35,c=60,d=30;
	clrscr();
	if(a<b)
	{
		if(a>c)
		{
			if(c<d)
			{
				printf("a is max");
			}
			else
			{
				printf("c is max");
			}

		}
	}
	else if(a>c)
		printf("a is max");
	else
		printf("c is max");
getch();
}