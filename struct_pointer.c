#include<stdio.h>
#include<malloc.h>
struct student
{
int rollno;
struct student *next;
};



int main(){

//struct student s1,s2,s3;

struct student *temp,*ptr1,*ptr2,*ptr3;
ptr1=(struct student *)malloc(sizeof(struct student));
ptr2=(struct student *)malloc(sizeof(struct student));
ptr3=(struct student *)malloc(sizeof(struct student));

ptr1->rollno=1;
ptr2->rollno=2;
ptr3->rollno=3;

ptr1->next=ptr2;
ptr2->next=ptr3;
ptr3->next=NULL;
temp=ptr1;
while(temp != NULL)
{
printf("%d\n",temp->rollno);
temp=temp->next;
}



}
