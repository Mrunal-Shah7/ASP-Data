#include<stdio.h>
#include<malloc.h>
#include<string.h>

struct student{
int rollno;
char name[25];
struct student *next;
struct student *previous;
};

int main(){
int op,input;
int count=1;
struct student *temp;
struct student *s1=(struct student *)malloc(sizeof(struct student));
struct student *s2=(struct student *)malloc(sizeof(struct student));
struct student *s3=(struct student *)malloc(sizeof(struct student));

s1->rollno=1;
strcpy(s1->name,"mrunal");
s1->next=s2;
s1->previous=NULL;

s2->rollno=2;
strcpy(s2->name,"yash");
s2->next=s3;
s2->previous=s1;

s3->rollno=3;
strcpy(s3->name,"vidit");
s3->next=NULL;
s3->previous=s2;


temp=s1;

while(temp=NULL){

printf("%d\t",temp->rollno);
printf("%s\n",temp->name);

temp=temp->next;

}

}


