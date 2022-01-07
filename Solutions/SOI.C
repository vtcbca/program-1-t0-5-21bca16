#include<stdio.h>
#include<conio.h>
void main()
{
	int no,a,r,sum;
	clrscr();
	printf("enter any numder:");
	scanf("%d",no);
	while(a>0)
	{
		r=no%10;
		no=no/10;
		sum=r*10+sum;
	}
	if(no==a)
		{
		printf("it is armstrong");
		}
	else
		{
		printf("it is armstrong");
		}
		getch();
}
