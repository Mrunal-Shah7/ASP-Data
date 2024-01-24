#include<stdio.h>
int main(){

int input,n;
int new=0;
int remainder;






printf("Enter the number:");
scanf("%d",&input);



n=input;



while(n!=0){

remainder=n%10;

new=new*10+remainder;

n=n/10;
}

if(input==new){printf("The number is a palindrome number\n");}

else{printf("The number is not a palindrome number\n");}



}














