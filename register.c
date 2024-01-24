#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<unistd.h>

struct credentials{
char username[100];
char password[100];
struct credentials *next;
struct credentials *previous;

		  };

struct credentials *head=NULL;

//===================================================================================
//New registration

void registerr(){

	struct credentials *temp;
	struct credentials *new=(struct credentials*)malloc(sizeof(struct credentials));

	printf("Create username:");
	scanf("%s",new->username);
	printf("Create a password:");
	scanf("%s",new->password);

	new->next=NULL;
	new->previous=NULL;


	if(head==NULL){
	
		head=new;

		      }	

	else if(head->next==NULL){

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



//===================================================================================
//Login 

void login(){

struct credentials *temp;
char name[100];
char pw[100];
int flag=0;
int result1,result2;

temp=head;

if(temp==NULL){

printf("No users exist!! Please Register First\n");

	      }



else{




printf("Enter the username:");
scanf("%s",name);


printf("Enter the password:");
scanf("%s",pw);






while(temp!=NULL){

result1=strcmp(temp->username,name);
result2=strcmp(temp->password,pw);

if(result1==0 && result2==0){

	printf("The user with the entered credentials is present!\n");
	flag=1;
	break;
	
	
	        	    }
temp=temp->next;					      

}




if(flag==0){
	printf("Invalid Credentials\n");

	   }

}

}
//===================================================================================

void main(){

int op=1;





while(op!=3){
printf("====================================================\n");
printf("\t\t =====Main Menu=====\n");
printf("1.Register\n");
printf("2.Login\n");
printf("3.Logout\n");
printf("-->");
scanf("%d",&op);


switch(op){

	case 1:

		registerr();
		printf("User Successfully Created\n");
		sleep(2);
	break;



	case 2:

		login();
		sleep(2);

	break;

}

}

}



