#include<stdio.h>


int total(int input){

int sum=0;

if(input==1){return 1;}


else{
sum=input+total(input-1);
return sum;
}
}



void main(){
int input;

printf("Enter the number:");
scanf("%d",&input);

printf("The sum is:%d",total(input));






}
