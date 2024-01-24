#include<stdio.h>
struct student
{
int roll;
char name[25];

};

void main(){
int i;
struct student s[5];
//printf("%d",sizeof(int));
//printf("%d",sizeof(char));
//printf("%d",sizeof(float));
printf("%ld",sizeof(struct student));
/*
for(i=0;i<5;i++)
scanf("%d %s",&s[i].roll,s[i].name);

for(i=0;i<5;i++)
printf("%d\t  %s\n",s[i].roll,s[i].name);
*/
}
