
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,count=0;
	clrscr();
	printf("enter number to check prime");
	scanf("%d",&n);
	i=2;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
		i++;
	 }
		if(count==0)
			printf("%d is a prime number",n);
		else
			printf("%d is a not prime number",n);
		getch();
	  }
