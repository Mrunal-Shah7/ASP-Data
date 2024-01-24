#include<stdio.h>
#include<malloc.h>

struct student{
int rollno; 
struct student *link;
};
struct student *left=NULL;
struct student *right=NULL;


//==================================================================================================

void push(){

struct student *new=(struct student *)malloc(sizeof(struct student));
printf("Enter rollno:");
scanf("%d",&new->rollno);
new->link==NULL;


if(left==NULL){

left=new;
right=new;

	      }


else if(left->link==NULL){

left->link=new;
right=new;
			 }


else{

right->link=new;
right=new;

    }
	  }
	  

//==================================================================================================
	  
	  
void pop(){
struct student *temp;

printf("Rollno of First Node:%d\n",left->rollno);

printf("Removing the first element\n");

temp=left;

left=left->link;

free(temp);

printf("Roll no of the new first node:%d\n",left->rollno);

          }




//==================================================================================================

void display(){
struct student *temp;

temp=left;

while(temp!=NULL){

printf("%d\n",temp->rollno);
temp=temp->link;

		 }

              }















//==================================================================================================




int main(){

int op=1;
int count=0;
int input;

while(op!=4){

printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("-->");
scanf("%d",&op);

switch(op){

case 1:

printf("Number of nodes to enter:");
scanf("%d",&input);

while(count!=input){

push();
count++;

		   }

break;




case 2:
pop();
break;


case 3:
display();
break;

}
}
}




