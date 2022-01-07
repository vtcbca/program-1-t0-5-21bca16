#include<stdio.h>
#include<stdio.h>
void main()
{
	int a,r,sum;
	clrscr();
	printf("enter any value:");
	scanf("%d",&a);
	for(sum=0;a>0;sum=sum+r)
	{
		r=a%10;
		a=a/10;
	}
	printf("sum is %d",sum);
	getch();
}