#include<stdio.h>


struct student
{
int rollno;
char name[25];
};

struct student change(struct student temp)
{
printf("Enter new name:");
scanf("%s",temp.name);
printf("\n");
printf("Enter new rollno:");
scanf("%d",&temp.rollno);
return temp;
}



void main()
{
struct student s1;
struct student temp;

printf("Enter student name:");
scanf("%s",s1.name);
printf("\n");
printf("Enter student rollno:" );
scanf("%d",&s1.rollno);
temp=change(s1);

printf("%d",temp.rollno);
printf("\n");
printf("%s",temp.name);


}








