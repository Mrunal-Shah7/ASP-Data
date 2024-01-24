#include<stdio.h>

int main(){

int input,j;
int i=0;

int rem[100];


printf("Enter the decimal number:");
scanf("%d",&input);



while(input>0){


rem[i]=input%2;

input=input/2;

i++;
}


for(j=i-1;j>=0;j--){

printf("%d",rem[j]);



}

printf("\n");






}


