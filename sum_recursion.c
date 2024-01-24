#include<stdio.h>
#include<unistd.h>


int sum(int a){

	if(a>0){
	
		return a + sum(a-1);

	       }
	       
	else{

		return a;

	    }



}

//================================================================================

void main(){

int input,answer;


printf("Enter the number upto which the sum is to be found:");
scanf("%d",&input);

answer=sum(input);

printf("The answer is:%d\n",answer);
sleep(2);

	   }
