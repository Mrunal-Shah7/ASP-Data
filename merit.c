#include<stdio.h>
#include<string.h>

struct student{

char name[25];
int rollno;
int maths;
int sci;
int eng;
float avg;
float percentage;
};




void main(){

int op=1;
int count=0;
int input,i,j;
int max,op2;
char s_name[25];
int s_rollno;

struct student s[100];
struct student temp;



while(op!=4){
printf("\t**********MAIN MENU**********\n");
printf("\t1.New Entry\n");
printf("\t2.Print Merit List\n");
printf("\t3.Search for an entry\n");
printf("\t4.Exit\n");
printf("\tEnter your choice:");
scanf("%d",&op);
printf("\n");

switch(op){

case 1:
	printf("Number of entries you want to enter:");
	scanf("%d",&input);
	for(i=0;i<input;i++){
	printf("Entry Number %d\n",i+1);
	printf("Enter Student Roll Number:");
	scanf("%d",&s[i].rollno);
	printf("\n");
	printf("Enter Student Name:");
	scanf("%s",s[i].name);
	printf("\n");
	printf("Enter Maths marks:");
	scanf("%d",&s[i].maths);
	printf("\n");
	printf("Enter Science Marks:");
	scanf("%d",&s[i].sci);
	printf("\n");
	printf("Enter English Marks:");
	scanf("%d",&s[i].eng);
	printf("\n");
	s[i].avg=(s[i].eng+s[i].maths+s[i].sci)/3;
	s[i].percentage=s[i].avg;
	count=count+1;
	}
break;



case 2:
//printf("%d",count);
for(i=0;i<count;i++){
	for(j=i+1;j<count;j++){

	     if(s[j].percentage>s[i].percentage){
	     
	     temp=s[i];
	     s[i]=s[j];
	     s[j]=temp;
	     	     
	     
	     		  }	

		    	    }

            } 
for(i=0;i<count;i++){
printf("Student Name:%s\n",s[i].name);
	     printf("Student Roll No:%d\n",s[i].rollno);
	     printf("Maths Marks:%d\n",s[i].maths);
	     printf("Science Marks:%d\n",s[i].sci);
	     printf("English Marks:%d\n",s[i].eng);
	     printf("Average:%f\n",s[i].avg);
	     printf("Percentage:%f\n",s[i].percentage);
	     }







break;
case 3:

	printf("1.Search by Name\n");
	printf("2.Search by Roll No\n");
	printf("Enter your choice:");
	scanf("%d",&op2);
	
	switch(op2){
	
	case 1:
	
	printf("Enter Student Name:");
	scanf("%s",s_name);
	printf("\n");
	printf("==============================================");
	printf("\n");
	
	for(i=0;i<count;i++){
	if(!(strcmp(s[i].name,s_name))){
	
	printf("Student Name:%s\n",s[i].name);
	printf("Student Roll No:%d\n",s[i].rollno);
	printf("Maths Marks:%d\n",s[i].maths);
	printf("Science Marks:%d\n",s[i].sci);
	printf("English Marks:%d\n",s[i].eng);
	printf("Average:%f\n",s[i].avg);
	printf("Percentage:%f\n",s[i].percentage);	
		}            }
	break; 
	
	case 2:
	printf("Enter Student Roll No:");
	scanf("%d",&s_rollno);
	printf("\n");
	printf("==============================================");
	printf("\n");
	
	
	for(i=0;i<count;i++){
	if(s_rollno==s[i].rollno){
	printf("Student Name:%s\n",s[i].name);
	printf("Student Roll No:%d\n",s[i].rollno);
	printf("Maths Marks:%d\n",s[i].maths);
	printf("Science Marks:%d\n",s[i].sci);
	printf("English Marks:%d\n",s[i].eng);
	printf("Average:%f\n",s[i].avg);
	printf("Percentage:%f\n",s[i].percentage);	
				    }
		            }
	break;
	}
break;


case 4:

printf("Exit Complete!\n");	
	
	


	

















}


















}


















}
