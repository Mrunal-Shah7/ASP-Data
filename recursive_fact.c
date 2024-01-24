#include<stdio.h>

int factorial(int input){

int final;

if(input==1){return 1;}

else{

final=input*factorial(input-1);

return final;

}
}

int main(){
int input;

printf("Enter input:");
scanf("%d",&input);

printf("The factorial is:",factorial(input));









}










