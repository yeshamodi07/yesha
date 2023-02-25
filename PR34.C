#include<stdio.h>
#include<conio.h>
	void main()
{
	int a;
	clrscr();
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("calling department");
		break;
	case 2:
		printf("account managment");
		break;
	case 3:
		printf("reception");
		break;
	case 4:
		printf("admin department");
		break;
	case 5:
		printf("pre-service");
		break;
	case 6:
		printf("post-service");
		break;
	}
	getch();
}