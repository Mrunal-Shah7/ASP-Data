#include<stdio.h>


int main(){

int input,i;
float num=1;
float ans=0;

printf("Enter the number:");
scanf("%d",&input);


for(i=1;i<=input;i++){


num=num*i;
ans=ans+i/num;



}


printf("%f",ans);








}
