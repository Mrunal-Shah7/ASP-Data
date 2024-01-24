#include<stdio.h>

int a[100];
int top=-1;
int count,i,j;
int checker=0;
int item;


//==========================================================================================



void push()
{
printf("PUSH FUNCTION ONGOING\n");



printf("How many elements do you want to enter:");
scanf("%d",&count);
printf("\n");

for(i=0;i<count;i++)
{
printf("Entry number %d:",i+1);
scanf("%d",&item);
//top=a[i];
top++;
a[top]=item;
}

/*
if(checker==0){

for(i=0;i<count;i++)
{
printf("Entry number %d:",i+1);
scanf("%d",&a[i]);
top=a[i];
}
checker=i;
	      }
else{

for(j=checker+1;j<(checker+count);j++){

printf("Entry number %d:",j+1);
scanf("%d",&a[j]);
top=a[j];


				    }
checker=j;

    }
*/
    
}

//==========================================================================================







void pop()
{

printf("Element on top:%d\n",a[top]);

printf("Popping the top element\n");

top--;

//printf("New top element:%d\n",top);
	  
}





//==========================================================================================


void display(){


int temp=top;

while(temp>=0){

printf("%d\n",a[temp]);

temp--;

	      }



		}






int main()
{
int op=1;

while(op!=4){

printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("-->");
scanf("%d",&op);

switch(op){

case 1:

push();

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
