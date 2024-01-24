#include<stdio.h>

struct student{
char name[40];
int rollno;
int maths;
int sci;
int eng;
int avg;
};



struct student max(struct student temp1,struct student temp2)
{
if(temp1.avg>temp2.avg)
return temp1;

else
return temp2;
}






void main()
{
struct student s1,s2;
struct student temp;


printf("Enter first student's name:");
scanf("%s",s1.name);

printf("Enter first student's rollno:");
scanf("%d",&s1.rollno);
printf("Enter first student's maths marks:");
scanf("%d",&s1.maths);
printf("Enter first student's science marks:");
scanf("%d",&s1.sci);
printf("Enter first student's english marks:");
scanf("%d",&s1.eng);
s1.avg=(s1.eng+s1.maths+s1.sci)/3;

printf("\n");

printf("Enter second student's name:");
scanf("%s",s2.name);
printf("Enter second student's rollno:");
scanf("%d",&s2.rollno);
printf("Enter second student's maths marks:");
scanf("%d",&s2.maths);
printf("Enter second student's science marks:");
scanf("%d",&s2.sci);
printf("Enter second student's english marks:");
scanf("%d",&s2.eng);
s2.avg=(s2.eng+s2.maths+s2.sci)/3;

temp=max(s1,s2);

printf("%d",temp.rollno);
printf("\n");
printf("%s",temp.name);
}




