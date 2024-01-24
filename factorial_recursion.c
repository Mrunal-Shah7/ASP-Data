#include<stdio.h>
#include<unistd.h>

int factorial(int a){

	if(a>1){
		return a*factorial(a-1);

	       }


	else{

		return 1;

	   
		}

}

int main(){

int answer,input;


printf("Enter the number whose factorial is to be found:");
scanf("%d",&input);

answer=factorial(input);

printf("The factorial of %d is:%d\n",input,answer);

          }
