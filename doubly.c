#include<stdio.h>
#include<malloc.h>

struct student{
int rollno;
struct student *next;
struct student *prev;
};
struct student *head=NULL;




//==========================================================================================


void input_at_end(){

struct student *temp;
struct student *new=(struct student*)malloc(sizeof(struct student));
printf("Enter rollno:");
scanf("%d",&new->rollno);
new->next=NULL;
new->prev=NULL;


if(head==NULL){

head=new;

	      }

else if(head->next==NULL){

head->next=new;
new->prev=head;

			 }

else{

temp=head;

while(temp->next!=NULL){

temp=temp->next;

		       }	

temp->next=new;
new->prev=temp;

    }


}

//=========================================================================================


void input_at_beg(){


struct student *new=(struct student*)malloc(sizeof(struct student));
printf("Enter rollno:");
scanf("%d",&new->rollno);
new->prev=NULL;


if(head==NULL){

head=new;
new->next=NULL;

	      }


else{

new->next=head;
head=new;
head->prev=NULL;

    }

}

//===========================================================================================

void display(){

struct student *temp;

temp=head;
while(temp!=NULL){

printf("%d\n",temp->rollno);

temp=temp->next;

		 }
	      }              




//===========================================================================================

void print_alt(){
struct student *temp;

int count=1;
temp=head;
while(temp!=NULL){
if(count%2!=0){printf("%d\n",temp->rollno);}
temp=temp->next;
count++;
		  }

		}





//===========================================================================================


void delete_end(){

struct student *temp,*temp2,*temp3;

if(head==NULL){printf("No nodes present to delete\n");}

else if(head->next==NULL)
{
temp=head;
free(temp);
head=NULL;
printf("Successfully deleted\n");
}

else
{
temp=head;
while(temp->next!=NULL){
temp2=temp;
temp=temp->next;
			}
free(temp);
temp2->next=NULL;
printf("Deletion Successful\n");
}
		 }




//===========================================================================================



void delete_beg(){

struct student *temp;

if(head==NULL){printf("No nodes present to delete\n");}


else{


temp=head;

head=head->next;

free(temp);

head->prev=NULL;

printf("Deletion Successful\n");

    }



                }


//===========================================================================================


void sort(){
int count=0;
int i,j,holder;
struct student *temp,*nxt;

temp=head;

while(temp!=NULL){
nxt=temp->next;
while(nxt!=NULL){

if(nxt->rollno>temp->rollno){
holder=temp->rollno;
temp->rollno=nxt->rollno;
nxt->rollno=holder;
			    }
nxt=nxt->next;    
		}	    
temp=temp->next;
	   	}
	     
	    
temp=head;
while(temp!=NULL){

printf("%d\n",temp->rollno);

temp=temp->next;

		 }   
	     
	     
	  
		}




//==========================================================================================


void search(){
int input; 
int count=1;
int flag=0;
struct student *temp;
printf("Enter the rollno to be searched:");   
scanf("%d",&input);


temp=head;

while(temp!=NULL){

if(temp->rollno==input){
printf("The entered rollno is present on node no %d of the linked list\n",count);
flag=1;

		       }

count++;
temp=temp->next;

		}
if(flag==0){printf("The entered rollno is not present in the linked list\n");}

	    }





//===========================================================================================


int main(){
int op=0;
int count=0;
int count1=0;
int count2=1;
int input;
while(op!=9)
{
printf("==============MAIN MENU================\n");
printf("1.Input at the end\n");
printf("2.Input at the beginning\n");
printf("3.Print the input\n");
printf("4.Print alternate nodes\n");
printf("5.Delete from end\n");
printf("6.Delete from beginning\n");
printf("7.Sort the nodes\n");
printf("8.Search for rollno\n");
printf("9.Exit\n");
printf("-->");
scanf("%d",&op);

switch(op){

case 1:
printf("Enter the number of nodes you want to create:");
scanf("%d",&input);
while(count!=input)
{
input_at_end();
count++;
}
break;






case 2:

printf("Enter the number of nodes you want to create:");
scanf("%d",&input);
while(count1!=input)
{
input_at_beg();
count1++;
}
break;




case 3:
display();
break;





case 4:
print_alt();
break;





case 5:
delete_end();
break;




case 6:
delete_beg();
break;



case 7:
sort();
break;



case 8:
search();
break;



}



}







	  }







































































































