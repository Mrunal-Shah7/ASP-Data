#include<stdio.h>
#include<malloc.h>

struct student{
int rollno;
struct student *link;
};

struct student *top=NULL;
struct student *head=NULL;

//=======================================================================================

void push(){
struct student *temp;

struct student *new=(struct student*)malloc(sizeof(struct student));
printf("Enter rollno:");
scanf("%d",&new->rollno);
new->link=NULL;

if(head==NULL){
top=new;
head=new;

	     }



else if(head->link==NULL){

head->link=new;
top=new;
			 }



else{

top->link=new;
top=new;

    }

	   }
		

//=======================================================================================



void pop(){
struct student *temp;

if(head==NULL)

printf("Rollno of the topmost node:%d\n",top->rollno);

printf("Removing the topmost node\n");

temp=head;

while(temp->link!=NULL){

top=temp;
temp=temp->link;


		       }
free(temp);
top->link=NULL;

printf("Rollno of the new topmost node:%d\n",top->rollno);



	  }



//=======================================================================================


int main(){
int op=1;
int input;
int count=0;

while(op!=3){

printf("1.Push\n");
printf("2.Pop\n");
printf("3.Exit\n");
printf("-->");
scanf("%d",&op);

switch(op){



case 1:
printf("How many nodes you want to enter:");
scanf("%d",&input);

while(count!=input){
push();
count++;
		   }

break;



case 2:

pop();

break;

         }

	      }
	      
}
