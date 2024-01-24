#include<stdio.h>

struct student{
int rollno;
int age;

};

//============================================================================



void main(){

struct student s[50];
FILE *ptr;

int count,i;

printf("Enter the number of records you want to input:");
scanf("%d",&count);

ptr=fopen("temp.txt","w");


for(i=0;i<count;i++){

printf("Enter rollno and age:\n");

scanf("%d %d",&s[i].rollno,&s[i].age);

fprintf(ptr,"%d %d\n",s[i].rollno,s[i].age);
           	    }
fclose(ptr);

printf("\n");
printf("Printing the records from the file:\n");

ptr=fopen("temp.txt","r");


for(i=0;i<count;i++)
{

printf("Entry number %d\n",i+1);
fscanf(ptr,"%d %d",&s[i].rollno,&s[i].age);
printf("%d %d\n",s[i].rollno,s[i].age);

}

fclose(ptr);









}
