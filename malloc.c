#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<unistd.h>


struct student {

	int rollno;
	char name[50];
	struct student *next;
	struct student *previous;
	
	       };	
struct student *head=NULL;

//======================================================================
//Entry from left

void e_left(){

	struct student *temp;
	struct student *new=(struct student*)malloc(sizeof(struct student));
	printf("Enter the rollno of the student:");
	scanf("%d",&new->rollno);	
	printf("Enter the name of the student:");
	scanf("%s",new->name);
	printf("\n");
	new->next=NULL;
	new->previous=NULL;
	
	if(head==NULL){
		
		head=new;
	
		      }   
	
	else if(head->next==NULL && head->previous==NULL){
	
	
		head->previous=new;
		new->next=head;
		head->next=NULL;	
		head=new;
							 }
	
	else{
	
		head->previous=new;
		new->next=head;
		head=new;
	
	    }
	
	
	
	
}


	
//======================================================================	
//Entry from right	
	
void e_right(){
	
	struct student *temp;
	struct student *new=(struct student*)malloc(sizeof(struct student));
	printf("Enter the rollno of the student:");
	scanf("%d",&new->rollno);	
	printf("Enter the name of the student:");
	scanf("%s",new->name);
	printf("\n");
	new->next=NULL;
	new->previous=NULL;
	
	
	if(head==NULL){
	
		head=new;
	
		      }
	
	else if(head->next==NULL && head->previous==NULL){
	
		head->next=new;
		new->previous=head;
							 }
	else{
	
		temp=head;
		while(temp->next!=NULL){	
	
			temp=temp->next;
	
				       }
	
		temp->next=new;
		new->previous=temp;
	
	
	    }
}



//======================================================================
//Display

void display(){

struct student *temp;


temp=head;

while(temp!=NULL){

printf("Student name: %s\n",temp->name);
printf("Student rollno: %d\n",temp->rollno);
printf("==============================\n");

temp=temp->next;

		 }

}
//======================================================================
//Search for a node

void search(){

struct student *temp;
char name[50];
int rollno;
int input;
int count=1;

	
		printf("Enter the rollno to be searched:");	
		scanf("%d",&rollno);	
			
		temp=head;	
			
		while(temp!=NULL){	
			
			if(rollno==temp->rollno){
			
			   printf("The entered rollno is present in node number %d\n",count);
			   printf("Name present in the node:%s",temp->name);
			   printf("\n");
			   
						}
			count++;
			temp=temp->next;
			
				 }
		
}




//======================================================================
//Delete from left

void leftdel(){

struct student *temp;

temp=head;

head=head->next;

free(temp);

head->previous=NULL;

printf("Deletion successful");
printf("\n");

}



//======================================================================
//Delete from right

void rightdel(){

struct student *temp,*temp2;

temp=head;


while(temp->next!=NULL){	
	
	temp=temp->next;
	
		       }

temp2=temp->previous;
temp2->next=NULL;

free(temp);

printf("Successfully deleted");
printf("\n");

}


//======================================================================
//DELETE


void delete(){

struct student *temp,*temp2,*temp3;
int rollno;	


printf("Enter the rollno of the node to be deleted:");
scanf("%d",&rollno);

temp=head;

while(temp!=NULL){

	if(temp->rollno==rollno){
	
		temp2=temp->previous;
		temp3=temp->next;
		temp2->next=temp3;
		temp3->previous=temp2;
		free(temp);

				}
	temp=temp->next;

		   }
printf("Deletion successful");
printf("\n");
}


//======================================================================
//SORT


void sort(){

int holder;
struct student *temp,*nxt;

temp=head;

while(temp!=NULL){
nxt=temp->next;
while(nxt!=NULL){

if((nxt->rollno)<(temp->rollno)){
holder=temp->rollno;
temp->rollno=nxt->rollno;
nxt->rollno=holder;
			    }
nxt=nxt->next;    
		}	    
temp=temp->next;
	   	}


printf("Sorting Successful");
printf("\n");


}

//======================================================================
//NAME SEARCH


void name(){

struct student *temp;
char input[50];
int result;
int count=1;


printf("Enter the name to be searched:");
scanf("%s",input);


temp=head;


while(temp!=NULL){


	result=strcmp(input,temp->name);

	if(result==0){
	
		printf("The student is present in the linked list at node no %d",count);
		printf("\n");
		printf("The rollno of the student is %d",temp->rollno);
		printf("\n");

		     } 

	temp=temp->next;
	count++;


		  }












}

//======================================================================	

//MAIN 


int main(){


int op=1,number;


while(op!=10){
	
	printf("\t\t==========MENU==========\n");
	printf("1.Entry from right\n");
	printf("2.Entry from left\n");
	printf("3.Display all the nodes\n");
	printf("4.Search by rollno\n");
	printf("5.Delete first node \n");
	printf("6.Delete last node \n");
	printf("7.Delete a specific node\n");
	printf("8.Sort the nodes based on rollno\n");
	printf("9.Search by name\n");
	printf("10.Exit\n");
	printf("-->");
	scanf("%d",&op);
	
	switch(op){
	
	
	case 1:
	
	printf("How many nodes do you want to enter:");
	scanf("%d",&number);
	printf("\n");
	for(int i=1;i<=number;i++){
		e_right();
				  }
	printf("Insertion Successful");
	printf("\n");
	sleep(2);
	break;
	
	
	
	
	
	
	case 2:	
	
	printf("How many nodes do you want to enter:");
	scanf("%d",&number);
	printf("\n");	
	for(int i=1;i<=number;i++){
		e_left();
				  }
	printf("Insertion Successful");
	printf("\n");
	sleep(2);			  
				  			  
	break;	
	
	
	
	
	
	case 3:
	
	display();
	
	sleep(2);
	
	break;
	
	
	
	
	
	case 4:
	
	search();
	sleep(5);
	
	break;
	
	
	
	case 5:
	
	leftdel();
	sleep(3);
	break;
	
	
	case 6:
	
	rightdel();
	sleep(3);
	break;
	
	
	case 7:
	
	delete();
	sleep(3);
	break;
	
	
	case 8:
	
	sort();
	sleep(3);
	break;
	
	
	case 9:
	
	name();
	sleep(3);
	break;
	
	}
	}
	}
