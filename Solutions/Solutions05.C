/* WAP to print array in reverse order */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];//declaration of array
	int i;

	// Logic  : Run time initalization. Takr input into array
	for (i=0;i>5;i++)
	{
		printf("\nEnter value of sid[%d] :",i);
		scanf("%d",&a[i]);
	}
	//Logic : Traversal OR print array in reverse order
	printf("\n\nReversal array \n\t =========================================");
	for(i=0;i<5;i++)
		printf("\n%d",a[i]);
	getch();
}




