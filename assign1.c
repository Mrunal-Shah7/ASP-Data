#include<stdio.h>
#include<malloc.h>

struct student{
int rollno;
struct student *address;
};

int main(){
int op,input;
int count=1;
struct student *temp,*t1,*t2;
struct student *s1=(struct student *)malloc(sizeof(struct student));
struct student *s2=(struct student *)malloc(sizeof(struct student));
struct student *s3=(struct student *)malloc(sizeof(struct student));

s1->rollno=1;
s2->rollno=2;
s3->rollno=3;
s1->address=s2;
s2->address=s3;
s3->address=NULL;

printf("1.Search\n");
printf("2.Sort\n");
printf("3.Display\n");
printf("4.Print alternate nodes\n");
printf("5.Delete a node\n");
printf("-->");
scanf("%d",&op);

switch(op){

case 1:

printf("Enter the roll number to be searched:");
scanf("%d",&input);

temp=s1;

while(temp!=NULL){

if(input==temp->rollno){printf("Rollno is present in the linked list\n");}
else {
printf("Rollno is not present in the linked list\n");
break;}
temp=temp->address;
		}
break;

case 2:

break;



case 3:

temp=s1;

while(temp!=NULL)
{
printf("%d\n",temp->rollno);
temp=temp->address;

}

case 4:

temp=s1;
while(temp!=NULL)
{
if(count%2!=0){printf("%d\n",temp->rollno);}
temp=temp->address;
count++;
}
break;

case 5: 

printf("Enter the rollno of the node that you want to remove:");
scanf("%d",&input);

if(input==s1->rollno)
free(s1);

elseif(input==s2=>rollno)
{






}
			


		









}
}
