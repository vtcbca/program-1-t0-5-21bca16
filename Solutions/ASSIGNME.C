/* WAP to create structure student (sid ,sname) enter 5 student details print
it using array of structure perform the search based on student name. */

#include<stdio.h>
#include<conio.h>
void main()
{
	int sid;
	char sname[30];
};
void main()
{
	struct student s[3];  //array of struct studente
	int i,flag=0;
	char n[30];
	clrscr();
	//input 3 student deatails
	for (i=0;i<3;i++)
	{
		print("\n Enter student id for student %d:",i+1);
		scanf("%d",&s[i].sid);
		print("\n Enter student sname for student %d:",i+1);
		scanf("%s",s[i].sname);
	}
	//print 3 student details
	clrscr();
	for (i=0;i<3;i++)

printf("\n\n%d\t%s",s[i].sid,s[i].sname);

	//search perch perticular record
	printf("\n\n\t\tEnter student name which you want to search?:");
	scanf("%s",n);
	for(i=0;i<3;i++)  // loop execute for each record
	{
	 //if (s[i].name==n)//generate error
	 if(strcmp (s[i].sname,n)==0)
	{
	 printf("\n\n%d \t%s",s[i].sid,s[i]sname);
	 flag=1;
	 break;
       }
     }
     if(flag==0)
       printf("\nStudent record is not available");
       getch();
     }


