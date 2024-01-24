#include<stdio.h>
#include<malloc.h>

struct student{
int rollno;
int address;
struct student *next;
}*head=NULL;
struct student *temp,*temp1,*temp2,*temp3,*temp4,*exc,*temp5,*temp6;


void input_at_end(){

struct student *new=(struct student *)malloc(sizeof(struct student));
printf("Enter the rollno:");
scanf("%d",&new->rollno);
new->next=NULL;
if(head==NULL)
{
head=new;
}
else if(head->next==NULL)
{
head->next=new;
}

else
{
temp=head;
while(temp->next!=NULL){


temp=temp->next;


}

temp->next=new;
}
}






void input_at_beg(){

struct student *new=(struct student *)malloc(sizeof(struct student));
printf("Enter the rollno:");
scanf("%d",&new->rollno);

if(head==NULL)
{
head=new;
new->next=NULL;
}
else 
{
new->next=head;
head=new;
}


}







void display(){

temp=head;
while(temp!=NULL){

printf("%d\n",temp->rollno);

temp=temp->next;

		 }
	      }              






void print_alt(){
int count2=1;
temp1=head;
while(temp1!=NULL){
if(count2%2!=0){printf("%d\n",temp1->rollno);}
temp1=temp1->next;
count2++;
		  }

		}





void delete_end(){
if(head==NULL){printf("No nodes present to delete\n");}

else if(head->next==NULL)
{
temp2=head;
free(temp2);
head=NULL;
printf("Successfully deleted\n");
}

else
{
temp3=head;
while(temp3->next!=NULL){
temp4=temp3;
temp3=temp3->next;
			}
free(temp3);
temp4->next=NULL;
printf("Deletion Successful\n");
}
		 }





void delete_beg(){
if(head==NULL){printf("No nodes present to delete\n");}

else
{
exc=head;
head=exc->next;
free(exc);
printf("Successfully deleted\n");
}
		 }




void delete(){
int search;
printf("Enter the roll no of the node that you want to delete:");
scanf("%d",&search);
temp5=head;
while(temp5->rollno!=search){
temp6=temp5;
temp5=temp5->next;
			    }
temp6->next=temp5->next;
free(temp5);
printf("Node successfully deleted");

	     }
	     
	     

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
















int main(){
int op=0;
int count=0;
int count1=0;
int count2=1;
int input;
while(op!=3)
{
printf("==============MAIN MENU================\n");
printf("1.Input\n");
printf("2.Print the input\n");
printf("3.Exit\n");
printf("5.Print alternate nodes\n");
printf("6.Delete from end\n");
printf("7.Delete from beginning\n");
printf("8.Delete a specific node\n");
printf("9.Sort the nodes\n");
printf("10.Search for rollno\n");
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

display();

break;


case 3:
 
break;

case 4:

printf("Enter the number of nodes you want to create:");
scanf("%d",&input);
while(count1!=input)
{
input_at_beg();
count1++;
}
break;

case 5:


print_alt();


break;


case 6:
delete_end();

break;


case 7:
delete_beg();
break;



case 8:
delete();
break;


case 9:
sort();
break;


case 10:
search();
break;
}



}







	  }
